#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: if fail, Null and pointer to newly allocated s1.
 */

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int index, conc_ind = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len++;

	conc = malloc(sizeof(char) * len);

	if (conc == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		conc[conc_ind++] = s1[index];

	for (index = 0; s2[index]; index++)
		conc[conc_ind++] = s2[index];

	return (conc);
}
