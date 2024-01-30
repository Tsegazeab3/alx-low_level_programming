#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: the number of argunments
 * @argv: the array of strings
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		int j = 0;

		while (argv[i][j])
		{
			printf("%c", argv[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
	return (0);
}
