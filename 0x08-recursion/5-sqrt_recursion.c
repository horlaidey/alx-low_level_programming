#include "main.h"
/**
 * _eval - evaluate the bisection of a possible sqrt
 * @i: represent the upper limit
 * @j: represent the lower limit
 * @n: the input integer which sqrt is to be evaluated
 * Return: integer return
 */

int _eval(int i, int n, int j)
{
	int m;

	m = (i + j) / 2;
	if (j - m == 0)
	{
		return (-1);
	}
	if (m * m == n)
	{
		return (m);
	}
	else if (m * m > n)
	{
		return (_eval(m, n, j));
	}
	else
	{
		return (_eval(i, n, m));
	}
}

/**
 * _sqrt_recursion - evaluate the squareroot of an input integer
 * @n: Input integer to be evaluated
 * Return: squareroot of n
 */

int _sqrt_recursion(int n)
{
	int j;
	int i = n / 2;

	if (n < 0)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		j = 0;

		return (_eval(i, n, j));
	}
}
