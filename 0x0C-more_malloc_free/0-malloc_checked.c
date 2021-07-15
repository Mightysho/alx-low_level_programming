#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: a pointer to where the memory will be allocted
 *
 * Return: on success a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *a;
a = malloc(b);
if (!a)
exit(98);
return (a);
}
