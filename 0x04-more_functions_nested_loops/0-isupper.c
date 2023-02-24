#include "main.h"

/**
 * _isupper - checks uppercase alphabets.
 * @c: test number.
 * Return: 0 or 1.
 */

int _isupper(int u)
{
	if (u >= 65 && u <= 90)
		return (1);
	else
		return (0);
}
