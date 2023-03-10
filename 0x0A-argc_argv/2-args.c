#include "main.h"
#include <stdio.h>

/**
  * main - Prints the arg content
  * @argc: argument count
  * @argv: argument vector
  * Return: Integer.
  */

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}

	return (0);
}
