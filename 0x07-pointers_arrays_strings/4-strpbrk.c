#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - searches a string for any set of bytes.
 * @s: string.
 * @accept: string being searched
 *
 * Return: a pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *accept_ptr = accept;

		while (*accept_ptr)
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return (NULL);
}
