#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string.
 * @str: string to be duplicated.
 * Return: A pointer to a newlly allocateed space in memory.
 */
char *_strdup(char *str)
{
	char *string;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	string = malloc(sizeof(char) * (i + 1));

	if (string == NULL)
	{
		return (NULL);
	}

	for (r = 0; str[r]; r++)
	{
		string[r] = str[r];
	}

	return (string);
}
