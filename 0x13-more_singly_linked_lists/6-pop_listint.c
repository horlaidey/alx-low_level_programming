#include "lists.h"

/**
 * pop_listint - deletes data from linked list
 * @head: pointer to the head of list
 *
 * Return: return the deleted data;
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	i = ptr->n;
	free(ptr);
	return (i);
}
