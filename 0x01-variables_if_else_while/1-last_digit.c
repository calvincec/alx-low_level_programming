#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Betty style doc for function main goes there */
int main(void)
{
    int n;
    int last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Calculate the last digit of the number stored in the variable n */
    last_digit = n % 10;
    if (last_digit < 0)
        last_digit = last_digit * -1;

    printf("Last digit of %d is %d. ", n, last_digit);
    if (last_digit > 5)
        printf("And is greater than 5");
    else if (last_digit == 0)
        printf("And is 0");
    else if (last_digit < 6 && last_digit != 0)
        printf("And is less than 6 and not 0");

    return (0);
}
