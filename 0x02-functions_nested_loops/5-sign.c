#include "holberton.h"

/**
 * print_sign - to print the sign of a number
 *
 * @n: the integer to be printed
 *
 * Return: to return 1 if number is positive,
 * returns 1 if number is negative,
 * and 0 for 0.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (1);
}
else
{
_putchar('0');
return (0);
}
}
