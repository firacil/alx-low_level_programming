#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters.
 * @n: fixed parameter.
 * Return: integer or sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);
	int i = 0, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
