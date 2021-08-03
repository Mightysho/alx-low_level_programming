#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 *
 * @head: the head of a singly linked list
 *
 * @idx: the index of the list where the new node should be added
 *
 * @n: element of a singly linked list
 *
 * Return: returns the address of the new node
 * and returns NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
struct listint_t *current, *new;
unsigned int i;
if (head == NULL)
return (NULL);
if (idx != 0)
{
current = *head;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = current->next;
current->next = new;
return (new);
}
