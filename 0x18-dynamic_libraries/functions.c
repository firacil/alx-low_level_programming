#include <stdio.h>
#include "main.h"

/**
 * add - adds two number.
 * @a: first number.
 * @b: second number.
 * Return: sum
 */

int add(int a, int b)
{
	int sum = a + b;
	return (sum);
}

/**
 * sub - substract two number.
 * @a: first number.
 * @b: second number.
 * Return: difference
 */

int sub(int a, int b)
{
	int diff = a - b;
	return (diff);
}

/**
 * mul - multiply two number.
 * @a: first number.
 * @b: second number.
 * Return: product
 */

int mul(int a, int b)
{
	int pro = a * b;
	return (pro);
}

/**
 * div - divide two number.
 * @a: first number.
 * @b: second number.
 * Return: divided
 */

int div(int a, int b)
{
	int divide = a / b;
	return (divide);
}

/**
 * mod - reminder of two number.
 * @a: first number.
 * @b: second number.
 * Return: reminder
 */

int mod(int a, int b)
{
	int modul = a % b;
	return (modul);
}
