#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int j;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %d byte(s)\n", sizeof(i));
	printf("Size of an int: %d byte(s)\n", sizeof(j));
	printf("Size of a long int: %d byte(s)\n", sizeof(x));
	printf("Size of a long long int: %d byte(s)\n", sizeof(y));
	printf("Size of a float: %d byte(s)\n", sizeof(z));
	return (0);
}
