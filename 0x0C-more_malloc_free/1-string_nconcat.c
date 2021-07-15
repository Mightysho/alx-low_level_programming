#include "holberton.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 *
 * @s1: a pointer to the string to be concatenated with @s2
 *
 * @s2: a pointer to the string to be concatenated with @s1
 *
 * @n: string length of @s2
 *
 * Return: on success, returns the two concatenated strings
 * on failure, returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *a;
int i;
unsigned int j, k, length, length2, total_len;
for
(i = 0;
s1[i] != '\0';
i++);
length = i;
for
(i = 0;
s2[i] != '\0';
i++);
length2 = i;
if (n >= length2)
{
n = length2;
}
total_len = length + n + 1;
a = malloc(total_len);
if (a == NULL)
{
return (NULL);
}
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (j = 0; j < length; j++)
{
a[j] = s1[j];
}
for (k = 0; k < n; k++, j++)
{
a[j] = s2[k];
}
a[j] = '\0';
return (a);
}
