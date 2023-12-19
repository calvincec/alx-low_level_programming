#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour_tens, hour_units, minute_tens, minute_units;

	for (hour_tens = 0; hour_tens < 3; hour_tens++)
	{
		for (hour_units = 0; hour_units <= 9; hour_units++)
		{
			if ((hour_tens <= 1 && hour_units <= 9) || (hour_tens <= 2 && hour_units <= 3))
			{
				for (minute_tens = 0; minute_tens <= 5; minute_tens++)
				{
					for (minute_units = 0; minute_units <= 9; minute_units++)
					{
						_putchar(hour_tens + '0');
						_putchar(hour_units + '0');
						_putchar(':');
						_putchar(minute_tens + '0');
						_putchar(minute_units + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
