#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 *
 * @a: Any arbtrary integer value
 *
 * Return: Always non negative value.
 */
int _abs(int a)
{

	if (a < 0)
	{
		return (a * (-1));
	}
	else
	{
		return (a);
	}
}
