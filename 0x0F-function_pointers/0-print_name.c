#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: pointer to the name
 * @f: function pointer.
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	(*f) = &print_name_as_is;
	(*f) = &print_name_uppercase;
}
