#include <stdio.h>
/**
 * main - prints Alphabet
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alph[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alph[i]);
	}
	putchar("\n");
	return (0);
}
