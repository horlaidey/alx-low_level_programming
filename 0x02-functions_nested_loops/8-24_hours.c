#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of jack bauer
 *
 * Return: Void return
 */
void jack_bauer(void)
{
	int i, j, x, y;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (x = 48; x < 54; x++)
			{
				for (y = 48; y < 58; y++)
				{
					if (i >= 50 && j >= 51)
					{
						break;
					}
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(x);
					_putchar(y);
					_putchar('\n');
				}
			}
		}
	}

}
