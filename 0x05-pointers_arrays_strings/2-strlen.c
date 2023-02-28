#include "main.h"

/**
 * _strlen - prints the length of the string.
 * @s: charachter to be tested.
 * Return: length.
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
