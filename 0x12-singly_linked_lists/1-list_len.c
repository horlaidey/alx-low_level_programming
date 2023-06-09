#include "lists.h"
/**
 * list_len - evaluates the number of elements in a linked list
 * @h: a pointer to struct list_s
 *
 * Return: returns the number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
