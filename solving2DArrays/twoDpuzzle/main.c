#include <stdio.h>

/*for row_0-size 
    if empty = 1
        replace empty with difference

 * for col_0-size
 *  if empty = 1
        replace empty with difference
 */
 
int main()
{
//get data
    //get size
    int size;
    printf("Enter data.\n");
    scanf("%i",size);
    //get array
    int array[size][size];
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%i",array[i][j]);
        }
    }
    //get rows total
    int rowTotals[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%i",rowTotals[i]);
    }
    //get columns total
    int colTotals[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%i",colTotals[i]);
    }
    
    //check if row has one empty one row at a time
    int col = 0, count = 0, cell;
    while(col < size)
    {
        if(array[0][col] == -1)
        {
            count++;
            cell = col;
        }
    }
    printf("row 1 col %i is -1\n",cell);
    
    
    /*/check if row has one empty
    int sum;
    for(int i = 0; i < 5; i++)
    {
        sum = 0;
        int *Ptr2empty;
        for(int j = 0; j < 5; j++)
        {
            sum += array[i][j];
        }
        sum++; // to account for the -1
        int dif = rowsTotals[i] - sum;
        printf("sum of row %i = %i\n",i,sum);
        printf("dif = %i\n",dif);
        for(int j = 0; j < 5; j++)
        {
            if(array[i][j] == -1)
            {
                array[i][j] = dif;
            }
        }
    }
    
    //print solved array
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i ",array[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}


