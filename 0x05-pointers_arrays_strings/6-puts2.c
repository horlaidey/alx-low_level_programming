#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: input string parameter
 * Return: void
 */

void puts2(char *str)
{
	int i, j = 0;

	while (*(str + i) != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
}
