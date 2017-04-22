#include <stdio.h>

//PROTOTYPES
int getSize(int size);
void getArray(int array[][], int size);
/*void getRowTotals(int *array, int size);
void getColTotals(int *array, int size);*/

int main(int argc, char **argv)
{
    
    //get size of array
    int size;
    size = getSize(size);
    
    
    //initalise arrays
    int nums[size][size]; // rowsTotals[size], colsTotals[size];
    
    //fill arrays 
    getArray(nums[][], size);
    /*getRowTotals(rowsTotals, size);
    getColTotals(colsTotals,size);
    */
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%i",nums[i][j]);
        }
    }
	return 0;
}

int getSize(int size)
{
    scanf("%i",&size);
    return size;
}

void getArray(int array[][], int size)
{
    
    //enter values into array
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%i",array[i][j]);
        }
    }
    
}
/*
void getRowTotals(int *array, size) //get row total array
{
    for(int i = 0; i < size; i++)
    {
        scanf("%i",&array[i]);
    }
    
}

void getColTotals(int *array, size) // get colunm total array
{
    for(int i = 0; i < size; i++)
    {
        scanf("%i",&array[i]);
    }
}
 * */
