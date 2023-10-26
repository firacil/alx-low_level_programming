#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - length of the string.
 * @s: pointer.
 * Return: none.
 */

int _strlen_recursion(*s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
