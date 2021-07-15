#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - function that checks for a digit
 *
 * @c: character to be checked
 *
 * Return: to return 1 if character is a digit
 * and to return 0 if character is not a digit
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}

/**
 * _atoi - function that convert a string to an integer
 *
 * @s: pointer to a string
 *
 * Return: to return value
 */
int _atoi(char *s)
{
int res = 0;
int i = 0;
int sign = 1;
if (s[i] == '-')
{
sign = (-1);
i++;
}
for
(i = 0;
s[i] != '\0';
i++);
res = res * 10 + s[i] - '\0';
if (s[i] == '-')
{
return ((sign)*(res));
}
else if (s[i] == 0)
{
return (0);
}
else
return (res);
}

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: a pointer to the string to be printed
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}

/**
 * main - a program that multiplies two positive numbers
 *
 * @argc: argument count
 *
 * @argv: returns a list of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int mul;
if (argv[1] == NULL || argv[2] == NULL)
{
_puts("Error");
_putchar('\n');
exit(98);
}
else if (argc != 3)
{
_puts("Error");
_putchar('\n');
exit(98);
}
else
{
mul = _atoi(argv[1]) * _atoi(argv[2]);
_putchar(mul);
_putchar('\n');
}
return (0);
}
