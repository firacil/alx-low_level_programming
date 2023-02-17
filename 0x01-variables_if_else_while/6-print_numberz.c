#include <stdio.h>

/**
 * main - prints numbers of base ten using putchar.
 * Return: 0.
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar('0' + a);
	}

	putchar('\n');
	return (0);
}
