#include "main.h"
/**
 * factorial - prints the factorial of a number
 * @n: an input integer
 * Return: returns the factorial of nthe input n.
 */


int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
