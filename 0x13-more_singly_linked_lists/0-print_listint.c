#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return:
 * the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count;
	listint_t *ptr = NULL;

	if (h == NULL)
		return (0);

	ptr =(listint_t *) h;
	count = 0;

	while (ptr != NULL)
	{
		count++;
		printf("%u\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
