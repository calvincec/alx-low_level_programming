#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: string one.
 * @s2: string two.
 * @n: number of characters.
 * Return: pointer to the string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i;
	char *concat, *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	concat = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	ptr = concat;
	while (*s1)
	{
		*ptr++ = *s1++;
	}
	for (i = 0; i < n; i++)
	{
		*ptr++ = *s2++;
	}
	*ptr = '\0';
	return (concat);
}
