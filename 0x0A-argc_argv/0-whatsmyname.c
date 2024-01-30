#include "main.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - prints it's own name
 * @argc: number of command line articles
 * @argv: an array consisting of the comman line articles
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 0;
	while (argv[0][j])
	{
		j++;
		printf("%c",argv[0][j]);
	}
	printf("\n");
}
