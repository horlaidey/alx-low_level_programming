#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory to allocate
 *
 * Return: return a void pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr);
}
