#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "holberton.h"

/**
 * check_str - a function to check if string is a digit
 *
 * @str: a pointer to a string
 *
 * Return: always 0
 */
int check_str(char *str)
{
unsigned int count = 0;
while (count < strlen(str))
{
if (isdigit(str[count]))
{
return (1);
}
count++;
}
return (0);
}

/**
 * main - a program that adds positive numbers
 *
 * @argc: argument count
 *
 * @argv: returns a list of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
int count = 1, sum = 0;
while (count < argc)
{
if (check_str(argv[count]) && *argv[count] > '0')
{
sum += atoi(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
count++;
}
printf("%d\n", sum);
return (0);
}
