#include <stdio.h>
#include "main.h"
/**
 * main - Multiplies two numbers
 * @argc: number of input argument
 * @argv: array of input argument
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
