#include "lists.h"
/**
 * get_nodeint_at_index - get nth node of a listiont linked list
 * @head: addresss of the head to the list
 * @index: the index of the node starting at 0
 *
 * Return: address of the node or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	i = 0;
	while (ptr != NULL)
	{
		if (i == index)
			return (ptr);
		ptr = ptr->next;
		i++;
	}
	return (NULL);
}
