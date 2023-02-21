#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabets.
 */

void print_alphabet(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

}

/**
 * main - prints lowercase from function calling.
 * Return: 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}
