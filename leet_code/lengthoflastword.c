#include <stdio.h>
/**
* lengthOfLastWord- finds the length of the last word in a sentence
* @s: sentence
* Return: len of last word
*/
int lengthOfLastWord(char* s) {
    char *word_point = s;
    int temp;
    while(*word_point != '\0')
    {
        if(*word_point != ' ')
        {
            temp = 0;
            while (*word_point != ' ' && *word_point != '\0')
            {
                temp++;
                *word_point++;
            }
        }
        while(*word_point == ' ')
            *word_point++;
    }
    return(temp);
}
int main()
{ 
    char test[] = "   fly me   to   the moon  ";
    printf("this is the number %d",lengthOfLastWord(test));
    return(0);
}
