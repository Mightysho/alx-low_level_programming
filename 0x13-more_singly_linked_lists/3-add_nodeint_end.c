#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of a listint_t list
 *
 * @head: head of the singly linked list
 *
 * @n: singly linked list
 *
 * Return: returns the address of the new element
 * and on failure, reutrns NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
struct listint_t *new_node;
struct listint_t *current;
current = *head;
while (current && current->next != NULL)
current = current->next;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (current)
current->next = new_node;
else
*head = new_node;
return (new_node);
}
