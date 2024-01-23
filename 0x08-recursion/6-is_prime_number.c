#include "main.h"
/**
 * check_prime - helps the is_prime_number function
 * @n: number being checked
 * @i: counter
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i);
/**
 * is_prime_number - checkes whether the number is prime or not
 * @n: number to be checked or not
 * Return: 1 if prime 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_prime(n, 1));
}
/**
 * check_prime - helps the is_prime_number function
 * @n: number being checked
 * @i: counter
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i)
{
	i++;
	if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (check_prime(n, i));
}

