#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns natural square of a number.
 * @n: number.
 * Return: natural square
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}
/**
 * find_sqrt - recursively find the square root
 * @n: number to find square root of.
 * @i: current guess for square root.
 * Return: natural square of n, or -1 otherwise.
 */
int find_sqrt(int n, int i)
{
	if (n < 0)
	{
		return (-1);
	}
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return (find_sqrt(n, i + 1));
}
