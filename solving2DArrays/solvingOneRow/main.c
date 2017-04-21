#include <stdio.h>


int main()
{
    //example array puzzle. -1 = empty spaces.
    int nums[5][5] = {{-1, 7, 5, 5, 2},
                      {7, 1, 5, -1, 2},
                      {2, 2, 4, -1, 6},
                      {2, -1, 7, 5, 4},
                      {5, 4, 4, 4, -1}};
    
    //rows total array
    int rowsTotals[5] = {20, 20, 20, 19, 18};
    
    //columns total array
    int colsTotals[5] = {17, 15, 25, 25, 15};
    
    //check if row has one empty
    int sum;
    for(int i = 0; i < 5; i++)
    {
        sum = 0;
        int *Ptr2empty;
        for(int j = 0; j < 5; j++)
        {
            sum += nums[i][j];
        }
        sum++; // to account for the -1
        int dif = rowsTotals[i] - sum;
        printf("sum of row %i = %i\n",i,sum);
        printf("dif = %i\n",dif);
        for(int j = 0; j < 5; j++)
        {
            if(nums[i][j] == -1)
            {
                nums[i][j] = dif;
            }
        }
    }
    
    //print solved array
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i ",nums[i][j]);
        }
        printf("\n");
    }
    return 0;
}


