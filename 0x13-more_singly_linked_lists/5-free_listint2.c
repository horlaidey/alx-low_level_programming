#include "lists.h"
/**
 * free_listint2 - free listint_t list and
 * sets head to NULL
 * @head: pointer to the address of the head
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		printf("Freed!");
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	*head = NULL;
}
