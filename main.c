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
        if(*haystack_ptr == *needle_ptr)
        {
            needle_ptr = needle;
            start_index = index;
            while(*needle_ptr == *haystack_ptr)
            {
                needle_ptr++;
                haystack_ptr++;
                index++;
                printf("found simmilar %c, %c \n",*haystack_ptr, *needle_ptr);
                printf("\n");
                if(*needle_ptr == '\0')
                    return(start_index);
            }
            if(*haystack_ptr == '\0')
            {
                printf("upper return");
                return(-1);
            }
        }
        else
        {
            haystack_ptr++;
            index++;
        }
    }
    printf("this is where things got wrong");
    return(-1);
}
int main(void)
{
    char haystack[] ="mississippi\0";
    char needle[] = "issip\0";
    printf("index: %d\n", strStr(haystack, needle));
    return(0);
}
