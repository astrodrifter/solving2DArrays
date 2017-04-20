#include <stdio.h>

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
    
    
    //check rows and solves
    for(int i = 0; i < size; i++)
    {
        int count = 0, sum = 0;
        for(int j = 0; j < size; j++)
        {
            sum += myArray[i][j];
            
            if(myArray[i][j] == -1)
            {
                count++;
            }
        }
        
        if(count == 1) //if only one empty space
        {
            int difference = totalRow[i]-1 - sum; //find solution for row
            for(int j = 0; j < size; j++) 
            {
                if(myArray[i][j] == -1) //find -1
                {
                    myArray[i][j] = difference; //change value of -1
                }
            }

        }
    }
    
    //print array
	for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%i ",myArray[i][j]);
        }
        printf("\n");
        
    }
	return 0;
}
