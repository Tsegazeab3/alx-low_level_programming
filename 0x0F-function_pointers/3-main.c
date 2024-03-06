#include"3-calc.h"
/**
 * main - simple calculator
 * @argc: the number of argunments
 * @argv: the array of argunments
 * Return: integers results of the argunments
*/
int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int (*func)(int, int) = get_op_func(argv[2]);
		int a;

		if (!func)
		{
			printf("ERROR\n");
			exit(99);
		}
		a = func(atoi(argv[1]), atoi(argv[3]));

		printf("%d\n", a);
		return (EXIT_SUCCESS);
	}
	printf("ERROR\n");
	exit(98);
}
