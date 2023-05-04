#include "main.h"

unsigned int _count(const char *s);
unsigned int _pow(int a, unsigned int b);
int _toint(char c);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number input
 * Return: thr converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int total = 0;
	unsigned int num = _count(b);

	if (num == 0)
		return (0);
	while (b[i] != '\0')
	{
		total += _toint(b[i]) * _pow(2, num - (i + 1));
		i++;
	}
	return (total);
}

/**
 * _toint - converts char to integer
 * @c: charater to be converted
 * Return: integer value
 */
int _toint(char c)
{
	int res;

	res = c - '0';
	return (res);
}

/**
 * _count - count the number of character in s
 * @s: string to be counted
 * Return: the number of charater in s or 0 if non or contain non 0s or 1s
 */
unsigned int _count(const char *s)
{
	unsigned int i = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != 48 && s[i] != 49)
		{
			return (0);
		}
		i++;
	}
	return (i);
}

/**
 * _pow - evaluates positve power of an input
 * @a: the base input integer
 * @b: the power unsigned integer
 * Return: the power of a raise to b.
 */
unsigned int _pow(int a, unsigned int b)
{
	unsigned int i;
	unsigned int result = 1;

	if (b == 0)
		return (1);
	for (i = 0; i < b; i++)
	{
		result *= a;
	}
	return (result);
}
