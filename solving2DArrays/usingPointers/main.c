#include <stdio.h>

/* multiply each element by 2 */
void modifyArray(int *numsPtr, int size)
{
    for (int i = 0; i < size; i++){
        if(numsPtr[i] == -1)
        {
            numsPtr[i] = 9;
        }
    }
}

int main()
{
    int nums[5] = {1, 2, -1, 3, -1};
    modifyArray(nums, 5);
    
    //print
    for(int i = 0; i < 5; i++)
    {
        printf("nums[%i] = %i\n",i, nums[i]);
    }
    return 0;
}