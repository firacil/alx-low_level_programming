#include <stdio.h>

/**
 * main - prints excutable file name.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Integer.
 */

int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
