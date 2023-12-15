#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Print the alphabet in lowercase
 */
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
        putchar(c);
    putchar('\n');

    return (0);
}