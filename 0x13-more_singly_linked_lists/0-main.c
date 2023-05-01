#include "lists.h"

/**
 * main - check code
 *
 * Return: Always 0
 */

int main(void)
{
	listint_t *head;
	size_t n;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 124);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	n = print_listint(head);
	printf("-> [%lu]\n", n);
	free_listint(head);
	head = NULL;
	return (0);
}
