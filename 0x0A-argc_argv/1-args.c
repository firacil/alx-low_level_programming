#include "main.h"

/**
 * main - prints number of argument passed on to cli
 * @argc: argument count
 * @argv: argument vector.
 * Return: Integer.
 */

int main(int argc, char *argv[] __attribute__((__unused__)))
{
	printf("%d\n", argc - 1);
	
	return (0);
}
