#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list
 *
 * @head: the head of a singly linked list
 *
 * Return: returns a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
struct listint_t *prev, *next;
if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
prev = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
