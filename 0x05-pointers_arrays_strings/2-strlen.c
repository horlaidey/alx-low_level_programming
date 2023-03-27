#include "main.h"
/**
 * _strlen - evaluate the length of an input string
 * @s: an arbitrary string input
 * Return: the length of the string parameter
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}
	return (a);
}
