#include <ctype.h>
#include <stdio.h>

/**
 * _isalpha - checks alphabetic charachters.
 * @c: test for charachters.
 * Return: 0 or 1.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
