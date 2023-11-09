#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcodes.
 * @argc: no of argument.
 * @argv: array of argument
 * Return: 0(sucess)
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("02hhx\n", arr[i]);
			break;
		}
		printf("02hhx", arr[i]);
	}
	return (0);
}
