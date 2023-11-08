#include <stdio.h>

/**
 * add - normal function.
 * Return: nothing.
 */

void add(int a, int b)
{

	printf("value of addition is : %d\n", a+b);
}

void sub(int a, int b)
{

        printf("value of sub is : %d\n", a-b);
}

void mul(int a, int b)
{

        printf("value of mul is : %d\n", a*b);
}

int main()
{
 	void (*fun_arr[])(int,int) = {add, sub, mul};

	int ch, a, b;

	printf("choose any first number\n");
	scanf("%d", &a);
	printf("choose any second number\n");
        scanf("%d", &b);
	printf("choose no from 0 to 2\n");
	scanf("%d", &ch);

	(*fun_arr[ch])(a, b);

	if (ch > 2)
		return (0);

	return (0);
}
