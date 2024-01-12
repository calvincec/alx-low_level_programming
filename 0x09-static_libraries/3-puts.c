#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *
 * @str: string being printed
 *
 * Return: void
 */
void _puts(char *str)
{
        int counter;

        for (counter = 0; str[counter] != '\0'; counter++)
        {
                _putchar(str[counter]);
        }

        _putchar('\n');
}
