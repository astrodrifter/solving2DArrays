#include <stdio.h>
void fillArray(int *array, size);
void printArray(int *pArray, int size);

int main(int argc, char **argv)
{
    //pointer
    char c = 'A'; //create a char
    char *cPtr; // create a char pointer
    cPtr = &c; //assign address of c to cPtr
    printf("c = %c, *cPtr = %c\n",c,*cPtr);
    *cPtr = 'B';
    printf("after *cPtr = 'B'; c = %c, *cPtr = %c\n",c,*cPtr);
    
    int array[3];
    int *pArray;
    pArray = array;
    fillArray(pArray, 3);
    printArray(pArray, 3);
    
    
	return 0;
}

void fillArray(int *array, size)
{ printf("enter three integers.\n");

    for(int i = 0; i < 3; i++)
    {
        scanf("%i \n",&array+i);
    }
}

void printArray(int *pArray, int size)
{
    for(int i = 0; i < 3; i++)
    {
        printf("%i \n",*pArray+i);
    }
}



