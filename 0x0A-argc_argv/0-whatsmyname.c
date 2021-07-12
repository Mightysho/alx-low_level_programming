#include <stdio.h>
#include "holberton.h"

/**
 * main - a program that prints its name
 *
 * @argc: argument count
 *
 * @argv: returns a list of arguments
 *
 * printf - to print the name of the program
 *
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
