#include "main.h"
#include <math.h>
/**
 * _atoi - converts a string to an integer
 * @s: the string to be converted
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0;
	int final_num = 0;
	
	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
			final_num = final_num * 10 + (((int)s[i] - (int)'0'));
		else if (s[i] == '-')
			final_num *= -1;
		else
		{
			i++;
			continue;
		}
		i++;
	}
	if (s[0] == '-')
		final_num = final_num * -1;
	return (final_num);
}


