#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - creates a random no takes the last digit
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int k = 0;

	if (n >= 0)
	{
		k = n;
	}
	else
	{
		k = -n;
	}
	int rem = k % 10;

	if (rem > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5 \n", n, rem);
	}
	else if (rem == 0)
	{
		printf("Last digit of %d is %d  and is 0\n", n, rem);
	}
	else
	{
		printf("Last digit of %d is %d  and is less than 5\n", n, rem);
	}
	return (0);
}
