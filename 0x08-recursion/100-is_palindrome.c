#include "main.h"
int counter(char *s, int i);
int checker(char *s, int i, int len);
/**
 * is_palindrome - checks for palindromes
 * @s: string that is checked
 * Return: 1 if true 0 if false
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (!s[0])
		return (1);
	else if (s[0])
	{
		len = counter(s, len);
		return (checker(s, 0, len - 1));
	}
	return (0);
}
/**
 * counter - counts the number of strings
 * @s: string to be counted
 * @i: len
 * Return: the length of the string
 */
int counter(char *s, int i)
{
	if (!s[i])
		return (i);
	i++;
	return (counter(s, i));
}
/**
 * checker - checkes whether the string is a palindrome
 * @s: string checked
 * @i: always 0
 * @len: the length of the string
 * Return: 1 if true 0 if false
 */
int checker(char *s, int i, int len)
{
	if (s[i] != s[len])
		return (0);
	else if (len <=	i)
		return (1);
	return (checker(s, i + 1, len - 1));
}
