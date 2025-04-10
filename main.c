#include <stdio.h>
/**
* strStr - finds the first needle in the haystack
* @haystack: the big string
* @needle: the small word we're looking for
* Return: the index of the first occurence or -1 if not found
*/
int strStr(char* haystack, char* needle) {
    int counter = 0;
    int alt_index = 0;
    int final_ans = 0;
    char* needle_ptr = needle;
    char* haystack_ptr = haystack;
    while(*haystack != '\0')
    {
        int bool = 0;
        needle_ptr = needle;
        if(*haystack == *needle_ptr)
        {
            final_ans = alt_index;
            counter = 0;
            haystack_ptr = haystack;
            while(*needle_ptr == *haystack_ptr)
            {
                needle_ptr++;
                haystack_ptr++;
                counter++;
                if(bool == 0 && haystack_ptr == needle)
                {
                    bool = 1;
                    haystack = haystack_ptr;
                    alt_index += counter;
                }
            }
            if(*needle_ptr == '\0')
                return(final_ans);

            if(*haystack == '\0')
            {
                return(-1);
            }
        }
        if(bool == 0)
        {
            haystack++;
            alt_index++; 
        }
    }
    return(-1);
}
int main(void)
{
    char haystack[] ="aa\0";
    char needle[] = "aaa\0";
    printf("index: %d\n", strStr(haystack, needle));
    return(0);
}
