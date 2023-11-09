#include "variadic_functions.h"

/**
 * print_numbers - print numbers.
 * @separator: strings comes in b/n numbers
 * @n: constant numbers.
 * Return: None
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}
	va_end(args);

	printf("\n");
}
