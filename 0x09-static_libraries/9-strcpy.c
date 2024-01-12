#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by *src
 *
 * @dest: buffer
 * @src: string
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
        int counter = 0;

        while (src[counter] != '\0')
        {
                dest[counter] = src[counter];
                counter++;
        }

        dest[counter] = '\0';

        return (dest);
}
