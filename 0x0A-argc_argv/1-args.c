#include "main.h"

/**
 * main - prints number of argument passed on to cli
 * @argc: argument count
 * @argv: argument vector.
 * Return: Integer.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	int i = 0;
	int j = 1;

	if (argc == 1)
		printf("%d\n", i);
	else
		printf("%d\n", argc - 1);
	return (0);
}
