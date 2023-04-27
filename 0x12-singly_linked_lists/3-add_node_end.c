#include "lists.h"

/**
 * add_node_end - adds node to the end of a linjked list
 * @head: pointer that points to a pointer to list_t
 * @str: string member of list_t
 *
 * Return: return an address to the head of the linkled list
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = new;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
