#include <stdio.h>
int getNum();
int main(int argc, char **argv)
{
    //get size
    int size = getNum();
	printf("size = %i x %i\n",size,size);
    
    //get array
    int array[size][size];
    for(int i = 0; i < size; i++)
    {
        for(int j =0; j < size; j++)
        {
            array[i][j] = getNum();
        }
    }
    
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
	return 0;
}

int getNum()
{
    int num;
    scanf("%i",&num);
    return num;
}