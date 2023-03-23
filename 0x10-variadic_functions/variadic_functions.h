#ifndef _VARIADIC_FUNCTIONS_H
#define _VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_istrings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(char *separator, va_list ap);
void print_integ(char *separator, va_list ap);
void print_float(char *separator, va_list ap);
void print_char_pt(char *separator, va_list ap);

/**
 * struct format_types - Struct format_types
 * @identifier: conversion specifier
 * @f:function pointer
 */
typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list ap);
} f_dt;
#endif
