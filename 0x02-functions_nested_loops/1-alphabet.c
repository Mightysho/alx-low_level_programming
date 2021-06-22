#include "holberton.h"
/**
 * main - Entry point
 *
 * function print_alphabet - to prints alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
