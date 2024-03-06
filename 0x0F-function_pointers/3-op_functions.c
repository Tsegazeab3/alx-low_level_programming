#include "3-calc.h"
/**
 * op_add- adds two numbers
 * @a: num1
 * @b: num2
 * Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- subtracts two numbers
 * @a: num1
 * @b: num2
 * Return: difference
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- multiplies two numbers
 * @a: num1
 * @b: num2
 * Return: product
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- divides two numbers
 * @a: num1
 * @b: num2
 * Return: quotient
*/
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("ERROR\n");
	exit(100);
}
/**
 * op_mod- finds the remainder of two numbers
 * @a: num1
 * @b: num2
 * Return: sum
*/
int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	printf("ERROR\n");
	exit(100);
}
