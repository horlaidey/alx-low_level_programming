#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 *
 * Return: pointer to the destination string
 */

char *rot13(char *s)
{
	int i = 0;
	int j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRXTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + i) == alpha[j])
			{
				*(s + i) = rot13[j];
				break;
			}
		}
		count++;
	}
	return (s);
}
