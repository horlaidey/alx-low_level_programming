#include "main.h"
/**
 * _isupper - checks for upper case character
 * @c: integer c
 *
 * Return: 1 for upper case and 0 otherwisw
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
