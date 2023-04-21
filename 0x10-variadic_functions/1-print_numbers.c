#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: a string to be printed between numbers
 * @n: the number of integer passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}

