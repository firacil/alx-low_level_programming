#include <ctype.h>
#include <stdio.h>

/**
 * _islower - prints checks for lower case charachters.
 * @c: character to be tested.
 * Return: 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}

/**
 * main - prints from calling function.
 * Return: 0.
 */

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
