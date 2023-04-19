#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code
 * @argc: arguments count
 * @argv: pointer to array of arguments
 *
 * Return: The result of the operation
 */

int main(int argc, char *argv[])
{
	int result;
	char *opp[5] = {"+", "-", "*", "/", "%"};

	if (argc != 4)
	{
		printf("Error: %d\n", argc);
		exit(98);
	}
	if (argv[2] != opp[0] || argv[2] != opp[1] || argv[2] != opp[2] ||
	argv[2] != opp[3] || argv[2] != opp[4])
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == opp[3] || argv[2] == opp[4]) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = (*get_op_func((char *)argv[2]))(atoi(argv[1]), atoi(argv[3]));
	return (result);
}
