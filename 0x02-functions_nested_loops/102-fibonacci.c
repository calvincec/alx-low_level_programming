#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci numbers below 4,000,000.
 * Return: 0 if successful
 */
int main(void)
{
    long int i, a, b, sum;

    a = 1;
    b = 2;

    for (i = 0, sum = 0; a < 4000000; i++)
    {
        if (!(a % 2))
            sum += a;

        b = a + b;
        a = b - a;
    }

    printf("%ld\n", sum);
    return 0;
}
