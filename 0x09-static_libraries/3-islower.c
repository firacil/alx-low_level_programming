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
