#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Print the alphabet in lowercase, except q and e
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
			putchar(c);
	putchar('\n');

	return (0);
}
