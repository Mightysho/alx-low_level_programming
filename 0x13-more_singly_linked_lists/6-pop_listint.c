#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n)
 *
 * @head: the head of a singly linked list
 *
 * Return: returns the head node's data
 * and returns 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
struct listint_t *current;
int n;
if (*head != NULL)
{
current = *head;
*head = (*(head))->next;
n = current->n;
free(current);
return (n);
}
return (0);
}
