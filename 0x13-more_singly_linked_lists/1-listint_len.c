#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list
 *
 * @h: a singly linked list
 *
 * Return: returns the number of elements of a linked list
 */
size_t listint_len(const listint_t *h)
{
size_t nbr_element = 0;
const listint_t *current = h;

while (current != NULL)
{
current = current->next;
nbr_element++;
}
return (nbr_element);
}
