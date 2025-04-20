#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int final_no;
    int i = digitsSize - 1;
    int j = 1;
    while(i >= 0)
    {
        final_no = final_no + digits[i] * j;
        i++;
        j = j*10;
    }
    final_no++;
    int *finalarray = calloc(0,(digitsSize + 1) * sizeof(int));
    int *temp = finalarray;
    while(j != 0)
    {
        *temp = final_no / j;
        final_no = final_no % j;
        j/=10;
    }
    return(finalarray);
}

