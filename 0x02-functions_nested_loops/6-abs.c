#include "main.h"

/**
 * _abs - works on value of integer.
 * @c: numbers.
 * Return: number or 0.
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
