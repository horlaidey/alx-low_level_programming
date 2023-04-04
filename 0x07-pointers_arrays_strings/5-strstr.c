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
	char *hay;
	char *need;

	while (*haystack != '\0')
	{
		hay = haystack;
		need = needle;

		while (*haystack != '\0' && *need != '\0' && *haystack == need)
		{
			haystack++;
			need++;
		}
		if (!*need)
		{
			return (hay);
		}
		haystack = hay + 1;
	}
	return ('\0');
}
