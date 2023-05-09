#include "main.h"
/**
 * error_handle - check for error in file openings
 * @file_from: First file from which we want to copy
 * @file_to: second file into which we want to copy
 * @argv: The argument vector
 * Return: nothing
 */
void error_handle(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file from %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - programs that copies files from one to the other
 * @argc: Number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, close_err;
	ssize_t num_chars, num_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handle(file_from, file_to, argv);

	num_chars = 1024;
	while (num_chars == 1024)
	{
		num_chars = read(file_from, buffer, 1024);
		if (num_chars == -1)
			error_handle(-1, 0, argv);
		num_write = write(file_to, buffer, num_chars);
		if (num_write == -1)
			error_handle(0, -1, argv);
	}
	close_err = close(file_from);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close_err = close(file_to);
	if (close_err == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
