#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: string to locate
 *
 * Return: a pointer to the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hayclone;
	char *needclone;

	while (*haystack != '\0')
	{
		hayclone = haystack;
		needclone = needle;

		while (*haystack != '\0' && *needclone != '\0'
&& *haystack == needclone)
		{
			haystack++;
			needclone++;
		}
		if (!*needclone)
		{
			return (hayclone);
		}
		haystack = hayclone + 1;
	}
	return ('\0');
}
