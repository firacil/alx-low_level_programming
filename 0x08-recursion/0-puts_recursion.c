#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints strings.
 * @s: pointer to the addresses of strings.
 * return: None.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
