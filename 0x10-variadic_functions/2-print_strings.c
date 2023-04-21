#include "variadic_functions.h"
/**
 * print_strings - prints styrings, followed by new line
 * @seperator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: Nothing
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		printf("%s", ((str == NULL) ? "(nil)" : str));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
}
