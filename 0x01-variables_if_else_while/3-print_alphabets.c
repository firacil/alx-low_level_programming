#include <stdio.h>

/**
 * main - prints alphabets in lower and upper case using putchar.
 * Return: 0.
 */

int main(void)
{
	char c = 'a';
	char d = 'A';

	while
		(c <= 'z')
	{
		putchar(c);
		c++;
	}

	while
		(d <= 'Z')
	{
		putchar(d);
		d++;
	}

	putchar('\n');

	return (0);
}
