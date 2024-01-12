#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: string.
 * @accept: number of bytes.
 * Return: number of bytes in intial segment.
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int counter = 0;
        int match;
        char *accept_ptr;

        while (*s)
        {
                match = 0;

                accept_ptr = accept;

                while (*accept_ptr)
                {
                        if (*s == *accept_ptr)
                        {
                                counter++;
                                match = 1;
                                break;
                        }

                        accept_ptr++;
                }

                if (match == 0)
                {
                        break;
                }

                s++;
        }

        return (counter);
}
