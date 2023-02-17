#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints if the value of given n is postive or not.
 * Return: Always 0.
 */

int main(void)
{
	int n;

        printf("give me a number: ");
	scanf("%d", &n);


	if (n > 0)
	{
		printf("The number is positive\n");
	}
	else if (n == 0)
	{
		printf("The number is zero\n");
	}
	else
	{
		printf("The number is negative\n");
	}


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
