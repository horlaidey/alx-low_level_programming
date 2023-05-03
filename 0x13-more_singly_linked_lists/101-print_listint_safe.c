#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: head pointer
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	listint_t *ptr;

	if (head == NULL)
		exit(98);
	ptr = (listint_t *)head;
	count = 0;
	count = 0;while (ptr != NULL)
	{
		count++;
		printf("[%p] %d\n", (void *)ptr, ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
