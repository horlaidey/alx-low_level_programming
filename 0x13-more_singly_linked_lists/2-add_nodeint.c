#include "lists.h"
/**
 * add_nodeint - adds node to the beginning of
 * a linked list
 * @head: a pointer to the pointer to a node
 * @n: integer
 *
 * Return: the pointer to the head of the linlked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
