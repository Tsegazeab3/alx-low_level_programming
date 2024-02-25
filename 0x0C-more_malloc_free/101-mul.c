#include "main.h"
/**
 * main - multiplies two numbers on the terminal
 * @argc: number of argunments
 * @argv: array of arguments
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i, j = 1, k = 0, l = 0;

	for (i = 1; i < argc; i++)
	{
		for (l = 0; argv[i][l] != '\0'; l++)
		{
			if (argv[i][l] < '0' || argv[i][l] > '9' || argc != 3)
			{
				k = 1;
				printf("Error \n");
				return (98);
			}
		}
		if (k == 0)
			j = j * atoi(argv[i]);
	}
	printf("%d\n", j);
	return (0);
}
