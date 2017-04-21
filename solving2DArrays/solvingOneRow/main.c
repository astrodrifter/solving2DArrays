#include <stdio.h>


int main()
{
    //example array puzzle. -1 = empty spaces.
    int nums[5][5] = {{-1, 7, -1, 5, -1},
                      {7, -1, 5, -1, 2},
                      {2, 2, 4, -1, 6},
                      {-1, -1, 7, 5, 4},
                      {5, 4, 4, 4, -1}};
    
    //print unsolved array
    printf("\nunSolved array:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i ",nums[i][j]);
        }
        printf("\n");
    }
    
    //rows total array
    int rowsTotals[5] = {20, 20, 20, 19, 18};
    printf("\nRows sums:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%i ",rowsTotals[i]);
    }
    //columns total array
    int colsTotals[5] = {17, 15, 25, 25, 15};
    printf("\n\nColumn sums:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%i ",colsTotals[i]);
    }
    printf("\n\n");
    int solved = 0;
    while(solved != 1)
    {
        int countEmpty = 0;
        for(int i = 0; i< 5; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                if(nums[i][j] == -1)
                {
                    countEmpty++;
                }
            }
        }
        if(countEmpty == 0)
        {
            solved = 1;
        }
        //check if row has one empty and solve - working
        int sumRow, countRow;
        for(int i = 0; i < 5; i++) // for each row
        {
            sumRow = 0, countRow = 0;
            for(int j = 0; j < 5; j++) // for each column
            {
                sumRow += nums[i][j];
                if(nums[i][j] == -1)
                {
                    countRow++;
                }
            }
            sumRow++; // to account for the -1
            if(countRow == 1)
            {
                int difRow = rowsTotals[i] - sumRow;
                for(int j = 0; j < 5; j++)
                {
                    if(nums[i][j] == -1)
                    {
                        nums[i][j] = difRow;
                    }
                }
            }
        
        }
    
        //check if row has one empty and solve - working
        int sumCol, countCol;
        for(int i = 0; i < 5; i++) // for each row
        {
            sumCol = 0, countCol = 0;
            for(int j = 0; j < 5; j++) // for each column
            {
                sumCol += nums[j][i];
                if(nums[j][i] == -1)
                {
                    countCol++;
                }
            }
            sumCol++; // to account for the -1
            if(countCol == 1)
            {
                int difCol = colsTotals[i] - sumCol;
                for(int j = 0; j < 5; j++)
                {
                    if(nums[j][i] == -1)
                    {
                        nums[j][i] = difCol;
                    }
                }
            }
        
        }
            
    }
    //print solved array
    printf("Solved array:\n");
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i ",nums[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}


