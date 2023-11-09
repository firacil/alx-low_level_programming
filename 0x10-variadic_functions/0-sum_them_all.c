#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all passed parameters.
 * @n: is integer number
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum_all = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum_all += va_arg(args, int);
	}
	va_end(args);
	return (sum_all);
}
