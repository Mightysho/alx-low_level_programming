#include <stdio.h>

/**
 * main - Entry point
 *
 * putchar - to print the alphabet in lowercase except for q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'e' && ch != 'q')
putchar(ch);
putchar('\n');
return (0);
}
