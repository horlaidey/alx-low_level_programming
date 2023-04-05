#include "main.h"
/**
 * _puts_recursion - prints a string followed by a new line
 * @s: input string pointer
 * Return: void
 */

void _puts_recursion(char *s)
{
	int i = 0;
	if (*(s + i) == '\0')
	{
		return ('\n');
	}
	_putchar(s + i);
	i++;
	_puts_recursion(char *s);
}
