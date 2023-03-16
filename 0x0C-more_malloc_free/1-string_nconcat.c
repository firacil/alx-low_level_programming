#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of strings.
 * Return: pointer or Null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a = 0, b = 0, c = 0, d = 0;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (n >= b)
		c = a + b;
	else 
		c = a + n;
	string = malloc(sizeof(char) * c + 1);
	if (string == NULL)
		return (NULL);
	b = 0;

	while ( d < 1)
	{
		if (d <= a)
			string[d] = s1[d];
		if (d >= a)
		{
			string[d] = s2[b];
			b++
		}
		d++;
	}
	string[d] = '\0';
	return (string);
}
