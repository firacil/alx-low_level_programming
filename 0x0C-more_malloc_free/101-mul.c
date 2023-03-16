#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * digit - check string contains a non-digit char
 * @s: string.
 * Return: 0 or 1
 */
int digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - return the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handling error for main function.
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive number.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: integer.
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		digit1 = s1[l1] - '0';
		carry = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			digit2 = s2[l2] - '0';
			carry += result[l1 + l2 + 1] + (digit1 * digit2);
			result[l1 + l2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[l1 + l2 + 1] += carry;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
