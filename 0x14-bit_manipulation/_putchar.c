#include "main.h"
/**
 * _putchar - print single character
 * @c: char c
 *
 * Return: the print on standard output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
