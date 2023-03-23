#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: None.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);
	unsigned int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));

			if (separator == NULL)
				return;
			else if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
