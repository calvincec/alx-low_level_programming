#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - check if integer is prime number.
 * @n: integer.
 * Return: returns 1 if integer is prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_recursive(n, 2));
}
/**
 * is_prime_recursive - recursively checks for prime number.
 * @n: number.
 * @div: divisor to test.
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int div)
{
	if (div * div > n)
	{
		return (1);
	}
	if (n % div == 0)
	{
		return (0);
	}

	return (is_prime_recursive(n, div + 1));
}
