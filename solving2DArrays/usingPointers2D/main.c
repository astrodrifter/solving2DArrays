#include <stdio.h>

/* multiply each element by 2 */
void modifyArray(int *numsPtr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            printf("%i ",(*(numsPtr + i) + j));
        }
        printf("\n");
    }
}

int main()
{
    int nums[5][5] = {{1, 2, -1, 3, -1},{2, -1, 3, 4, -1},
    {4, 3, -1, -1, 5},{1, 2, -1, 3, -1},{2, -1, 3, 4, -1}};
    modifyArray(nums, 5);
    
    /*int *Ptr = nums;
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%i ",(*(Ptr + i) + j));
        }
    }*/
}