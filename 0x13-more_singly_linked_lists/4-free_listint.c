#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: head of the singly linked list
 */
void free_listint(listint_t *head)
{
struct listint_t *current;
while (head != NULL)
{
current = head;
head = head->next;
free(current);
}
}
