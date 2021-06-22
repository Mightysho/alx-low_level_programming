#include "holberton.h"

/**
 * print_alphabet_x10 - to print the alphabet x10
 */
void print_alphabet_x10(void)
{
int count;
char ch;
for (count = 0; count <= 9; count++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
