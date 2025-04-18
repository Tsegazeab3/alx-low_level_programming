#include <stdio.h>
int searchInsert(int* nums, int numsSize, int target) {
    int min = 0;
    int max = numsSize - 1;
    int middle;
    while(min <= max)
    {
        middle = (min + max) / 2;
        if(target == nums[middle])
            return middle;
        if(target > nums[middle])
            min = middle + 1;
        else 
            max = middle - 1;
    }
    return(min);
}
int main()
{
    int nums[] = {1, 3};
    int target = 2;
    int numsSize = 2;
    printf("index: %d\n", searchInsert(nums, numsSize,target));
    return(0);
}
