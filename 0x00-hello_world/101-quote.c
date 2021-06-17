#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * write - to print a quote without using printf
 *
 * Return 1
 */
int main(void)
{
char ch[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, ch, sizeof(ch) - 1);
return (1);
}
