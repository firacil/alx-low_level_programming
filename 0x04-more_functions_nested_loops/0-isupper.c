#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks uppercase alphabets.
 * @x: test number.
 * Return: 0 or 1.
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
		return (1);
	else
		return (0);
}
