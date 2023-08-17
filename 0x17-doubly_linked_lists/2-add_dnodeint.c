#include "lists.h"
/**
 * add_dnodeint - add node to the start of dlistint
 * @head: head of the dlistint
 * @n: data to be inserted at the beginning
 * Return: the address of the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *h;

	h = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = h;
	new->prev = NULL;
	if (h != NULL)
	{
		h->prev = new;
	}
	(*head) = new;

	return (*head);
}
