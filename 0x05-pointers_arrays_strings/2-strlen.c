#include "main.h"

/**
 * _strlen - prints the length of the string.
 * @str: charachter to be tested.
 * Return: none.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
