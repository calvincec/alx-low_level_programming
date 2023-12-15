#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* Betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: Always 0 (Success)
 * Description: Print the last digit of the number stored in the variable n
 * and states if it is greater than 5, less than 6 but not 0, or 0
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit of the number stored in the variable n */
	

	printf("Last digit of %d is %d ", n, last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	else if (last_digit == 0)
		printf("and is 0\n");
	else if (last_digit < 6 && last_digit != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
