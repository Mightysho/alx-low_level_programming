#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list
 *
 * @h: singly linked list
 *
 * Return: returns the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
struct listint_t *current;
while (*h != NULL)
{
current = *h;
*h = (*h)->next;
free(current);
}
return (0);
}
