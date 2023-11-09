#include "3-calc.h"

/**
 * main - program that perform simple oprations
 * @argc: number of argument
 * @aegv: array of arguments.
 * Return: 0(success)
 */

int main(int argc, char *argv[])
{
	int a1, a2, res;
	char o;
	int (*fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = fun(a1, a2);

	printf("%d\n", res);

	return (0);
}
