#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - print anything.
 * @format: specify conversion.
 * Return: None.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	f_dt form_types[] = {
		{ "c", print_char },
		{ "i", print_integ },
		{ "f", print_float },
		{ "s", print_char_pt }
	};

	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(ap, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *form_types[j].identifier)
			{
				form_types[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;

	}

	va_end(ap);
	printf("\n");
}

/**
  * print_char - Print character type
  * @separator: separator of the character
  * @ap: list of var arguments
  * Return: None
  */
void print_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_arg(ap, int));
}

/**
  * print_integ - Prints a character of integer type
  * @separator: separator of the character
  * @ap: list of variadic arguments
  * Return: None
  */
void print_integ(char *separator, va_list ap)
{
	printf("%s%i", separator, va_arg(ap, int));
}

/**
  * print_float - Prints a character of float type
  * @separator: separator of the character
  * @ap: list of variadic arguments
  * Return: None
  */
void print_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, double));
}

/**
  * print_char_pt - Prints the content pointer to char type
  * @separator: separator of the character
  * @ap: list of variadic arguments
  * Return: None
  */
void print_char_pt(char *separator, va_list ap)
{
	char *arg = va_arg(ap, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
