#include "main.h"
/**
* is_prime_number - checks whether a number is a prime number
* @n: number being checked
* Return: 0 if composite, 1 if prime
*/
int is_prime_number(int n)
{
	if (n <= 1 || (n % 2 == 0 && n != 2))
		return (0);
	return (actual_is_prime_number(n, 3, 1000000000));
}
/**
* actual_is_prime_number - checks whether a number is a prime number
* @n: number being checked
* @counter: for recursion
* @counter_limit: for optimisation
* Return: 0 if composite, 1 if prime
*/
int actual_is_prime_number(int n, int counter, int counter_limit)
{
	int final;

	if (n % counter == 0)
		return (0);
	counter_limit = n / counter;
	if (counter > counter_limit)
		return (1);
	final = actual_is_prime_number(n, counter + 2, counter_limit);
	return (final);
}
