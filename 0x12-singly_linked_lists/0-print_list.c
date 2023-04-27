#include "lists.h"

/**
 * print_list - prints the content of a linked list
 * @h: a pointer to a struct list
 *
 * Return: The number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	unsigned long int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
