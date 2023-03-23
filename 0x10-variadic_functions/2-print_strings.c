#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: None.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	char *string;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(ap, n);

		while (i < n)
		{
			string =  va_arg(ap, char *);

			if (string == NULL)
				printf("%s", "(nil)");

			else
				printf("%s", string);

			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
			i++;
		}
		va_end(ap);
	}
	printf("\n");
}
