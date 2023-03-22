#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: name of a person or things given in the program.
 * @f: function pointer to function called printing something.
 * Return: None.
 */

void print_name(char *name, void (*f)(char *))
{
	f = (name);
}
