#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at position index
 * of a listint_t linked list.
 * @head: pointer to the head address;
 * @index: index of the node that should be deleted
 * Return: 1 if successful and -1 otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i;

	ptr = *head;
	i = 0;

	while (ptr != NULL)
	{
		if (index == 0)
		{
			ptr = ptr->next;
			*head = ptr;
			return (1);
		}
		if (i + 1 == index)
		{
			temp = ptr->next;
			ptr->next = ptr->next->next;
			free(temp);
			return (1);
		}
		ptr = ptr->next;
		i++;
	}
	return (-1);
}
