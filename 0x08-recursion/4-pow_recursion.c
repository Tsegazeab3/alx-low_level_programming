#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * Return: the final value
 */
int _pow_recursion(int x, int y)
{
	int final_num;

	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	final_num = x * _pow_recursion(x, y - 1);
	return (final_num);
}
