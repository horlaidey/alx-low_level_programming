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
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}
			_putchar((j % 10) + 48);
		}
		_putchar('\n');
	}
}
