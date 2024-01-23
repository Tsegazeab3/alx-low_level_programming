#include "main.h"
/**
 * _sqrt_aider - aids the above function
 * @n: number to check with
 * @low: the lowest number
 * @high: the highest num
 * Return: depends on the number
 */
int _sqrt_aider(int n, int low, int high);
/**
 * _sqrt_recursion - returns the natural sqare root of a number
 * @n: number to be square rooted
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		return (n);
	else
		return (_sqrt_aider(n, 0, n));
}
/**
 * _sqrt_aider - aids the above function
 * @n: number to check with
 * @low: the lowest number
 * @high: the highest num
 * Return: depends on the number
 */
int _sqrt_aider(int n, int low, int high)
{
	int mid = (high + low) / 2;

	if (mid * mid < n && (mid + 1) * (mid + 1) > n)
		return (-1);
	else if (mid * mid == n)
		return (mid);
	else if (mid * mid < n)
		return (_sqrt_aider(n, mid + 1, high));
	else if (mid * mid > n)
		return (_sqrt_aider(n, low, mid));
	else
		return (mid);
}
