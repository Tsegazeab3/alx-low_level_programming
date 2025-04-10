#include <stdio.h>
/**
* strStr - finds the first needle in the haystack
* @haystack: the big string
* @needle: the small word we're looking for
* Return: the index of the first occurence or -1 if not found
*/
int strStr(char* haystack, char* needle) {
    int index = 0;
    int start_index = 0;
    char* needle_ptr = needle;
    char* haystack_ptr = haystack;
    while(*haystack_ptr != '\0')
    {
        needle_ptr = needle;
        if(*haystack_ptr == *needle_ptr)
        {
            start_index = index;
            while(*needle_ptr == *haystack_ptr)
            {
                needle_ptr++;
                haystack_ptr++;
                index++;
            }
            if(*needle_ptr == '\0')
                return(start_index);
        }
        else
        {
            haystack_ptr++;
            index++;
        }
    }
    
    return(-1);
}
int main(void)
{
    char haystack[5] = "aaaa\0";
    char needle[3] = "aa\0"; 
    printf("index: %d\n", strStr(haystack, needle));
    return(0);
}
