#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index of a listint_t linked list
 *
 * @head: the head of a singly linked list
 *
 * @index: the index of the node that should be deleted
 *
 * Return: on success, returns 1
 * and returns -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
struct listint_t *current, *next;
unsigned int i;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
next = (*head)->next;
free(*head);
*head = next;
return (1);
}
current = *head;
for (i = 0; i < index - 1; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}
next = current->next;
current->next = next->next;
free(next);
return (1);
}
