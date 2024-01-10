#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string
 * Return: 1 if string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, length));
}
/**
 * check_palindrome - recursively checks if a string is a palindrome.
 * @s: string
 * @len: length
 * Return: 1 if palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	if (*s != s[len - 1])
	{
		return (0);
	}
	return (check_palindrome(s + 1, len - 2));
}
/**
 * _strlen - calculates length of a string.
 * @s: string.
 * Return: length of string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
