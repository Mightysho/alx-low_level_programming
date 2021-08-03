#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 *
 * @head: head of the singly linked list
 *
 * @n: signly inked list elements
 *
 * Return: returns the address of the new element
 * and returns NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
struct listint_t *new_node;
new_node = (listint_t *) malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
