#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint linked ;list
 * @head: address to the listint_t linked list
 * Return: the sum of the data or 0 if empty
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr;

	if (head == NULL)
		return (0);
	ptr = head;
	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
