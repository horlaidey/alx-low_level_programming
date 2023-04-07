#include "main.h"
#include <stdio.h>
/**
 * main - prints program name
 * @argc: input argument count
 * @argv: strings of arguments enter into the program
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
		return (0);
	}
	return (1);
}
