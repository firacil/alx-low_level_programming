#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if the value of given n is postive or not.
 * Return: Always 0.
 */

int main(void)
{
	int n=0;


	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
