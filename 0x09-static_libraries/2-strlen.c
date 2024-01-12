#include "main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: string whose length is being counted
 *
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
        int counter;
        int length = 0;

        for (counter = 0; s[counter] != '\0'; counter++)
        {
                length = counter + 1;
        }

        return (length);
}
