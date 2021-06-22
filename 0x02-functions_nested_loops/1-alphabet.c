#include "holberton.h"
/**
 * Function that prints alphabet in lowercase
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
}
