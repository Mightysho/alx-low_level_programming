#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - to prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char ch;
for (i = 48; i < 58; i++)
putchar(i);
for (ch = 'a'; ch <= 'f'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
