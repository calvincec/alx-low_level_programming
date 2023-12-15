#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Betty style doc for function main goes there */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    /* Prints the random number and states if it's 0, negative, or positive */
    printf("%d is ", n);
    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else if (n < 0)
        printf("negative\n");

    return (0);
}