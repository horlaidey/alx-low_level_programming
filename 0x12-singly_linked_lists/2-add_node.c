#include "lists.h"

/**
 * add_node - Adds a new node at the begining of a list_t list
 * @head: pointer to a pointer to list_t list
 * @str: string to be inputed
 *
 * Return: the address to the new element or NULL
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	new->str = strdup(str);
	new->len = i;
	new->next = *head;

	return (*head);
}
