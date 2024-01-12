#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * *_strchr - locates a character in a string.
 * @s: string.
 * @c: character.
 * Return: A pointer to the first occurence of c, NULL if none.
 */
char *_strchr(char *s, char c)
{
        while (*s != '\0')
        {
                if (*s == c)
                {
                        return (s);
                }

                s++;
        }

        if (c == '\0')
        {
                return (s);
        }

        return (NULL);
}
