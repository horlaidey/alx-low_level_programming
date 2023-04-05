#include "main.h"

/**
 * _pow_recursion - prints the valu of x to the power of y
 * @x: the base integer
 * @y: the exponential integer
 * Return: return the power of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
