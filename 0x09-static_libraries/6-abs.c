#include "main.h"
/**
 * _abs - conputes absolute value of an integer.
 *
 * @num: Number being checked.
 *
 * Return: absolute value of integer.
 */
int _abs(int num)
{
        int abs_value = 0;

        if (num < 0)
        {
                abs_value = (num * -1);
        }
        else
        {
                abs_value = num;
        }

        return (abs_value);
}
