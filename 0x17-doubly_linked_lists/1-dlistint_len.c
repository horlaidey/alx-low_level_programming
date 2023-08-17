#include "lists.h"
/**
 * dlistint_len - return the length of a dlistint
 * @h: pointer to dlistint
 * Return: return the length in size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		length += 1;
		h = h->next;
	}
	return (length);
}
