#include "main.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the list_t list
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	free(head->str);
	free(head);
}
