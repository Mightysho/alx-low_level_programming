#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: argument count
 *
 * @argv: returns the number of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int count;
for (count = 0; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
