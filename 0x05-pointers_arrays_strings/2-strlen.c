#include "main.h"

/**
 * _strlen - prints the length of the string.
 * @str: charachter to be tested.
 * Return: none.
 */

size_t _strlen(char *str)
{
	size_t length = 0;

	while (*str++)
	length++;
	return (length);
}
