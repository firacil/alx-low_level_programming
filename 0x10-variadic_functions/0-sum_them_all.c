#include "variadic_functions.h"

/**
 * sum_them_all - prints sum of all passed parameters.
 * @n: is integer number
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum_all;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (int i = 0; i < n; i++)
	{
		sum_all += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum_all);
}
