#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * my_memmset - a funstion that initializes an array with a value
 *
 * @b: a pointer to an array
 *
 * @c:
 *
 * @len: length of the array
 *
 * Return: to return an initialized array
 */
void *my_memset(void *b, int c, int len)
{
unsigned char *p = b;
while (len > 0)
{
*p = c;
p++;
len--;
}
return (b);
}

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmemb: a pointer to an array that memory will be allocated to
 *
 * @size: the size of @nmemb
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *a;
unsigned int i;
if (size != 0)
{
a = malloc(size * sizeof(nmemb));
my_memset(a, 0, size * sizeof(nmemb));
}
else
{
return (NULL);
}
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = nmemb;
}
return (a);
}
