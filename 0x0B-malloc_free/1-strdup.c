#include "main.h"
/**
 * _strdup - returns a pointer to a memory space containing string duplicate
 * @str: the string input to be returned
 *
 * Return: Return a pointer to a duplicate string
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	do {
		i++;
	} while (*(str + i) != '\0');
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		ptr[j] = *(str + j);
	}
	ptr[i] = '\0';
	return (ptr);
}

