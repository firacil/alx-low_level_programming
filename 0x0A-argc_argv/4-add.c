#include "main.h"

/**
 * main - add all postive numbers.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: integers no.
 */

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}

		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
