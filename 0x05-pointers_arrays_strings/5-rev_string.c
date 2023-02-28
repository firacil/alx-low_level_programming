#include "main.h"

/**
 * rev_string - prints reverse.
 * @s: string tested.
 * Return: none.
 */

void rev_string(char *s)
{
	int l = 0, indx = 0;
	char tmpo;

	while (s[indx++])
		l++;
	for (indx = l - 1; indx >= l / 2; indx--)
	{
		tmpo = s[indx];
		s[indx] = s[l - indx - 1];
		s[l - indx - 1] = tmpo;
	}
}
