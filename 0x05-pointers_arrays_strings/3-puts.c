#include "holberton.h"
/**
 * _strlen - function to print to print a string
 * @s: string parameter
 * Return: string followed by new line
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
