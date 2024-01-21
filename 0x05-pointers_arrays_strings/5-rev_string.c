#include "main.h"
/**
 * rev_string - reverses a string
 * @s : string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int half_len = 0;
	char temp = s[0];
	char *p = &temp;

	while (s[len])
	{
		len++;
	}

	while (half_len < len)
	{
		*p = s[half_len];
		s[half_len] = s[len - 1];
		s[len - 1] = *p;
		half_len++;
		len--;
	}
}
