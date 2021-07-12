#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 *
 * @argc: argument count
 *
 * @argv: returns the number of arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
int product;
if (argc == 3)
{
product = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
