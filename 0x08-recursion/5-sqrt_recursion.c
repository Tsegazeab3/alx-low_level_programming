#include "main.h"
/**
 * _sqrt_recursion - returns the natural sqare root of a number
 * @n: number to be square rooted
 * Return: integer 
 */
int _sqrt_aid(int x, low, high);
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	else:
		int low = 0;
		int mid = n / 2
		_sqrt_aid(n, low, mid);
}
int _sqrt_aid(high, low, mid)
{
	mid = (low + high) / 2;
	if (mid * midd > high)
		_sqrt_aid (high, low, mid - 1);
     	else if ( mid * mid  < x)
