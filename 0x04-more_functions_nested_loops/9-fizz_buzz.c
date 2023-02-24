#include "main.h"
#include <stdio.h>

/**
 * main - prints  a number from 1 to 100 & fizz buzz.
 * Return: 0.
 */

int main(void)
{
	int x;
	char c = "Fizz";
	char d = "Buzz";

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
		{
			printf("Fizz");
			
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
			
		}
		else
			printf("%d", x);
		if (x != 100)
		{
			printf(" ");
		}
	}
		printf("\n");
}
