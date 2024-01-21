#include "main.h"
/**
 * rev_string - reverses a string
 * @s : string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int half_len = 0;
	char temp = '0';
	char *p = &temp;
	int cons_len;

	while (s[len] != '\0')
	{
		len++;
	}
	cons_len = len;

	while (half_len <= cons_len / 2)
	{
		*p = s[half_len];
		s[half_len] = s[len - 1];
		s[len - 1] = *p;
		half_len++;
		len--;
	}
}
