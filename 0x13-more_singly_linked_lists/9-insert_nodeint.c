#include "lists.h"


listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	new = malloc(sizeof(listint_t *));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	ptr = *head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == idx - 1)
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
