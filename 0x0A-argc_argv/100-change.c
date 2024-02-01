#include "main.h"
/**
 * main - finds the minimum number cents in the function
 * @argc: number of strings in the argunmnet
 * @argv: array of strings in the command line
 * Return: number of cents need for the change
 */
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int no_cents = 0;
		int num = atoi(argv[1]);

		if (num < 0)
			printf("0\n");
		else
		{
			int divider;

			while (num > 0)
			{
				if (num >= 25)
					divider = 25;
				else if (num < 25 && num >= 10)
					divider  = 10;
				else if (num < 10 && num  >= 5)
					divider = 5;
				else if (num < 5 && num >= 2)
					divider = 2;
				else
					divider = 1;
				no_cents += num / divider;
				num = num % divider;
			}
			printf("%d\n", no_cents);
		}
	}
	else
	{
		printf("Error");
		return (1);
	}
	return (0);
}
