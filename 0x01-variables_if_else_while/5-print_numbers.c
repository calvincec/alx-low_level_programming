#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Print all single-digit numbers of base 10 starting from 0
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);

	putchar('\n');

	return (0);
}
