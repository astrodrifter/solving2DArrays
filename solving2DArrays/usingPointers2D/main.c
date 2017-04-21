#include <stdio.h>

/*int getSum(int *values, int size);*/
void modifyArray(int *numsPtr, int *rowTotPtr, int *colsTotPtr, int size);

int main()
{
    //example array puzzle. -1 = empty spaces.
    int nums[5][5] = {{-1, 7, 5, 5, 2},{7, 1, 5, -1, 2},
    {2, 2, 4, -1, 6},{2, -1, 7, 5, 4},{5, 4, 4, 4, -1}};
    
    //rows total array
    int rowsTotals[5] = {20, 20, 20, 19, 18};
    
    //columns total array
    int colsTotals[5] = {17, 15, 25, 25, 15};
    
    modifyArray(nums, rowsTotals, colsTotals, 5);
    
    /*int *Ptr = nums;
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i ",(*(Ptr + i) + j));
        }
    }*/
}


void modifyArray(int *numsPtr, int *rowTotPtr, int *colsTotPtr, int size)
{
    
    //sum rows
    for (int i = 0; i < size; i++)
    {
        printf("row %i\n",i);
        int sumRow = 0; // dif = 0;;
        for(int j = 0; j < size; j++)
        {
            
            //printf("%i ",(*(numsPtr + i) + j));
            //if one -1 repace with difference.
            //sum row find dif from tot
            sumRow += (*(numsPtr+i) + j);
            //dif = *(numsPtr+i) - sum;
            printf("sum = %i.\n",sumRow);
        }
        
        
    }
    
    //sum columns
    for (int i = 0; i < size; i++)
    {
        printf("row %i\n",i);
        int sumCol = 0; // dif = 0;;
        for(int j = 0; j < size; j++)
        {
            
            //printf("%i ",(*(numsPtr + i) + j));
            //if one -1 repace with difference.
            //sum row find dif from tot
            sumCol += (*(numsPtr+j) + i);
            //dif = *(numsPtr+i) - sum;
            printf("sum = %i.\n",sumCol);
        }
        
    }
}

/*int getSum(int *values, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum += *(values+i);
    }
    return sum;
}*/
