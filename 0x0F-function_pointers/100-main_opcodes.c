#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - print opcodes of this program
 * @a: address of main function
 * @n: number of bytes.
 * Return: None
 */
void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - print opcodes of its own main function
 * @argc: number of arguments passed to the function
 * @argv: array of pointers to arguments
 * Return: integer
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
