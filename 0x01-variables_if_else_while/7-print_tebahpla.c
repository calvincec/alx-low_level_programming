#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: A program that prints the lowercase
 *  alphabet in reverse, followed by a new line.
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
		putchar(n);

	putchar('\n');

	return (0);
}
