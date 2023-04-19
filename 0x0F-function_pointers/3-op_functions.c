#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - add two integers
 * @a: the first integer
 * @b: the second integer
 *
 * Return: sum of the integer addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substract two integer input
 * @a: the first integer input
 * @b: The second integer input
 *
 * Return: difference of the two integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two input integer
 * @a: the first input integer
 * @b: the second integer input
 *
 * Return: multiplication of the integer input
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two input integer
 * @a: the first integer
 * @b: the second integer
 *
 * Return: The dividsion of the input integers
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - evaluate the modulo of two integers
 * @a: the first integer
 * @b: The second integer
 *
 * Return: The modulo of the input integer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
