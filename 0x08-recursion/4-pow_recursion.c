#include "main.h"
/**
* _pow_recursion - x raised the value of x
* @x: number
* @y: power
* Return: x raised to y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x,  y - 1) * x);
}

