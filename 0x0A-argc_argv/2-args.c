#include "main.h"

/**
 * main - prints all arguments it recieves.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Integer.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
