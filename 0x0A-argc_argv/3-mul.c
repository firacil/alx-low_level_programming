#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the multiplication of two args number.
  * @argc: argument count
  * @argv: argument vector
  * Return: Integer.
  */
int main(int argc, char *argv[])
{
	int f1 = 0, f2 = 0;

	if (argc == 3)
	{
		f1 = atoi(argv[1]);
		f2 = atoi(argv[2]);
		printf("%d\n", f1 * f2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
