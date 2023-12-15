#include <stdio.h>

/**
 * main - Prints all possible different combinations of two two-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
    int i, j, k, l;

    for (i = 0; i < 10; i++)
    {
        for (j = i; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                for (l = (k == i) ? j + 1 : 0; l < 10; l++)
                {
                    putchar(i + '0');
                    putchar(j + '0');
                    putchar(' ');
                    putchar(k + '0');
                    putchar(l + '0');

                    if (i == 9 && j == 8 && k == 9 && l == 9)
                        continue;

                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }

    putchar('\n');

    return (0);
}
