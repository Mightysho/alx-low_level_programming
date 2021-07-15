#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: minimum integer
 *
 * @max: maximum integer
 *
 * Return: on success, returns an array of integers
 * if @min is greater than @max, returns NULL
 * on failure, returns NULL
 */
int *array_range(int min, int max)
{
int *a, i, length;
if (min > max)
{
return (NULL);
}
length = max - min + 1;
a = malloc(sizeof(int) * length);
if (a == NULL)
{
return (NULL);
}
for (i = min; i <= length; i++)
{
a[i] = min++;
}
return (a);
}
