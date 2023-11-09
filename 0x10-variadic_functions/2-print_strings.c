#include "variadic_functions.h"

/**
 *  print_strings - print string.
 *  @separator: string passed..
 *  @n: number passed..
 *  Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		else if (separator && i == 0)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}

	printf("\n");

	va_ende(args);
}
