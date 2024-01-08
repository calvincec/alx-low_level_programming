#include "main.h"
#include <stdio.h>
/**
 * set_string - sets the value of a pointer to char.
 * @s: pointer to a pointer of a string
 * @to: destination pointer
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
