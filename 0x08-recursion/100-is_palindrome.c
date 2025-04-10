#include "main.h"
int is_palindrome(char *s)
{
	if(s == NULL)
		return(1);
	return(actual_is_palindrome(s, s));
}
int actual_is_palindrome(char *start, char *end)
{
	int val;
	char *s;
	if(*end == '\0')
		return(1);
	val = actual_is_palindrome(start,end + 1);
	if(start == end && val != 0)
	{
		val = 1;
	}
	if (*start == *end && val != 0)
	{
		actual_is_palindrome(start + 1, "\0");
		return(val);
	}
	else if(*start != *end)
		val = 0;
	return(val);
}
