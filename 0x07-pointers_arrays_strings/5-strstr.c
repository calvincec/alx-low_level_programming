#include "main.h"
#include <stdio.h>
/**
 * *_strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: A pointer to begining of substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *pattern = needle;

		while (*pattern && *haystack && (*pattern == *haystack))
		{
			pattern++;
			haystack++;
		}

		if (*pattern == '\0')
		{
			return (start);
		}

		haystack = start + 1;
	}

	return (NULL);
}
