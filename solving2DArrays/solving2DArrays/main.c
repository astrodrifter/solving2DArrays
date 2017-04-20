/*(1)	size
  (2)	for array[size] read in data
  (3)	-1 = empty spaces
  (4)	last two lines are totals
  (5)	Take note of position of -1
  (6)	Minus given from total
  (7)	Enter remainder into -1
  (8)	Start on rows with only one -1
  (9)	If more than one -1 guess and check
  (10)	Check answers

 * Dhruva O'Shea 20/04/17
 * 
 * 
 * */

#include <stdio.h>
void solveRow(int *myArray, int *totalRow, int row, int size)
{
   //sum row
   int sum = 0;
   int difference = 0;
   for(int j = 0; j < size; j++)
    {
            sum += &myArray[row][j]; 
    }
    
    // minus from total
    difference = totalRow[row]-sum;
        
    //enter difference into array empty space
    for(int i = 0; i < size; i++)
    {
        if(&myArray[row][i] == -1)
        {
            &myArray[row][i] = difference;
        }
    }

   //minus from total of row
   //enter difference into array empty space
}
int main(int argc, char **argv)
{
    //get size of array
    int size;
    scanf("%i",&size);
    
    //initalise array
    int myArray[size][size];
    
    //enter values into array
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            scanf("%i",&myArray[i][j]);
        }
    }
    
    //get totals
    int totalRow[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%i",&totalRow[i]);
    }
    
    int totalCol[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%i",&totalCol[i]);
    }
    
    
    //count -1 in rows
    int emptySpace[size];
    for(int i = 0; i < size; i++)
    {
        
        int count = 0;
        for(int j = 0; j < size; j++)
        {
            if(myArray[i][j] == -1)
            {
                count++;
            }
        }
        //if row has one empty space (-1) put row in array
        if(count == 1)
        {
            emptySpace[i]=i;
        }
        printf("row %i has %i empty spaces.\n",i,count);
    }
    
    //print -1 locations
    printf("The -1 are in the following rows:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%i ",emptySpace[i]);
    }
    printf("\n");
    
    
    // slove rows with one empty space
    for(int i = 0; i < size; i++)
    {
        if(emptySpace[i] != 0)
        {
           solveRow(*myArray, *totalRow, i, size);
        }
    }
    //print array
    /*for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%i ",myArray[i][j]);
        }
        printf("\n");
        
    }
	*/
	return 0;
}
