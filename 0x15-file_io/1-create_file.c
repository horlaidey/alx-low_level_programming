#include "main.h"
/**
 * create_file - creates a file
 * @filename: Name of the file to be created
 * @text_content: A Null terminated string to write to the file
 * Return: 1 on success and -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fp, num_letter, num_write;

	if (filename == NULL)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	
	num_letter = 0;
	while (text_content[num_letter] != '\0')
	{
		num_letter++;
	}
	num_write = write(fp, text_content, num_letter);
	if (num_write == -1)
		return (-1);

	close(fp);
	return (1);
}
