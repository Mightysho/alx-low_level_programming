#include "holberton.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area copying from
 * @n: how many bytes to copy
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
