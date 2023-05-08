#include "main.h"
/**
 * read_textfile - reads a textfile and prints it to the POSIX stdout
 * @filename:  The name of the file to be read
 * @letters: The number of letters to be read
 *
 * Return: Number of letter it could read or 0 if fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t num_read, num_write;
	char *buff;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
		return (0);
	}
	num_read = read(fp, buff, letters);
	num_write = write(STDOUT_FILENO, buff, num_read);
	close(fp);
	free(buff);

	return (num_write);
}
