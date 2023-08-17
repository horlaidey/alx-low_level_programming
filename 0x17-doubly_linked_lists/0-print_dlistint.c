#include "lists.h"
/**
 * print_dlistint - prints data in dlistint
 * @h: pointer to the head node
 * Return: size_t
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;

	while(h != NULL)
	{
		printf("%d\n", h->n);
		total += 1;
		h = h->next;
	}
	return (total);
}
