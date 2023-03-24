#include "main.h"
/**
 * more_numbers - prints 1 to 14 10 times
 *
 * Return: void return
 */

void more_numbers(void)
{
	int i, j, k, l;

	for (i = 0; i < 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (k = 49; k < 50; k++)
		{
			for (l = 48; l <= 52; l++)
			{
				_putchar(k, l);
			}
		}
		_putchar('\n');
	}
}
