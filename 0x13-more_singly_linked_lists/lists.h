#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct listint_s - slightly linked list
 * @n: integer
 * @next: pointer to the next node
 *
 * Description: Singly linked list node structure
 *
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);


#endif