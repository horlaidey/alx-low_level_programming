#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input string pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;
	while (i >= 0)
	{
		if (*(s + i) == '\0')
		{
			fwrite(1, *(s + i), 1);
		}
		fwrite(1, *(s + i), 1);
		i++;
	}
}
