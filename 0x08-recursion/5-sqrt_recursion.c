#include "main.h"
/**
* _sqrt_recursion - funtion pointing to another function
* @n: integer to calculate square root
* Return: square root of the number if n is perfect integer
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_function(0, n, n));
}
/**
* actual_sqrt_function - uses binary search to find square root of a number
* @min: minimum for binary search
* @max: maximum for binary search
* @number: square rooted number
* Return: square root of a number if perfect root and -1 if not
*/
int actual_sqrt_function(int min, int max, int number)
{
	int value = (max + min) / 2;

	if (number == 1)
		return (1);
	if (max - min < 2)
		return (-1);
	if (value * value < number)
		value = actual_sqrt_function(value, max, number);
	if (value * value > number)
		value = actual_sqrt_function(min, value, number);
	if (value * value == number)
		return (value);
	return (value);
}
