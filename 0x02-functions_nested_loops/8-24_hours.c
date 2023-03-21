#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of jack bauer
 *
 * Return: Void return
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 00; i <= 23; i++)
	{
		for (j = 00; j < 60; j++)
		{
			_putchar(i + ':' + j);
		}
	}
}
