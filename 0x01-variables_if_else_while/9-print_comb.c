#include <stdio.h>

/**
 * main - prints all possible combination of single digits.
 * Return: 0.
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');

	}

	putchar('\n');
	return (0);
}
