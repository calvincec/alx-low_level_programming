#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Print whether the number stored in the variable n is
 * positive, negative, or zero
 */
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
