#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a
 * given position
 * @head: pointer to trhe address of the linked list
 * @idx: position of the insertion
 * @n: data to be inserted
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		ptr = *head;
		new->next = ptr;
		*head = new;
		return (*head);
	}
	ptr = *head;
	i = 0;
	while (ptr != NULL)
	{
		if (i + 1 == idx)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (ptr);
		}
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
