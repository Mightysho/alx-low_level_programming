#include <stdio.h>
#include "holberton.h"

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: argument count
 *
 * @argv: returns a list of program arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}
