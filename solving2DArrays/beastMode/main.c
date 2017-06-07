#include <stdio.h>

//void fillRowArray(int rowArray[], int size);
void fillArray(int *array, int size);

int main(int argc, char **argv)
{
    //get size
    int size;
    scanf("%i",&size);
	printf("size = %i x %i\n",size,size);
    
    //get array
    int array[size][size];
    int *arrayPtr = array;
    fillArray(arrayPtr, size);
    
    
    //print array
    printf("\nUnsolved array:\n");
    for(int i = 0; i < size; i++)
    {
        for(int j =0; j < size; j++)
        {
            printf("%i ",array[i][j]);
        }
        printf("\n");
    }
    
    //seperate to rows and columns
    //int rowArray[size];
    //fillRowArray(rowArray,size);
    
    
    /*for(int i = 0; i< size; i++)
    {
         printf("%i ",rowArray[i]);
    }*/
    
	return 0;
}

/*void fillRowArray(int rowArray[], int size)
{
    for(int i = 0; i< size; i++)
    {
         scanf("%i",&rowArray[i]);
    }
}*/

void fillArray(int *array, int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j =0; j < size; j++)
        {
            scanf("%i",(*(array+i)+j));
        }
    }
}