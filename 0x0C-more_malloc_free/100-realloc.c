#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 *
 * @ptr: a pointer to the memory previously allocated with a call to malloc
 *
 * @old_size: the allocated space size for @ptr
 *
 * @new_size: the size of the new memory block
 *
 * Return: to return the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
ptr = malloc(old_size);
if (new_size == old_size)
{
return (ptr);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
ptr = malloc(new_size);
return (ptr);
}
else
{
free(ptr);
new_size += old_size;
ptr = malloc(new_size);
return (ptr);
}
}
