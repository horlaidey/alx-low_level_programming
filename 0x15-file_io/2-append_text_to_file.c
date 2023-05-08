#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The name of the file
 * @text_content: Null terminated string to add to the end of the file
 * Return: return 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, num_letter, num_write;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		num_letter = 0;
		while (text_content[num_letter] != '\0')
		{
			num_letter++;
		}
		num_write = write(fp, text_content, num_letter);
		if (num_write == -1)
			return (-1);
		return (1);
	}
	close(fd);
	return (1);
}
