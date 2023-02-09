#include "main.h"

/**
  * errmsg_read_file - Displays an error messsage when a file is read
  * @filename: Filename
  * @fd: File descriptor
  * Return: Nothing
  */
void errmsg_read_file(char *filename, int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
  * errmsg_write_file - Displays an error messsage when writing to a file
  * @filename: Filename
  * @fd: File descriptor
  * Return: Nothing
  */
void errmsg_write_file(char *filename, int fd)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
  * close_file - Closes a file
  * @file_to_close: File to be closed
  * Return: 1 for success or -1 for failure
  */
void close_file(int file_to_close)
{
	int file_close = close(file_to_close);

	if (file_close == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_to_close);
		exit(100);
	}
}
/**
  * main- Entry point
  * @arg: Number of argument
  * @argv: Array of argument
  * Return: 0
  */
int main(int arg, char **argv)
{
	ssize_t f_read = 1024, f_write;
	int file_from, file_to;
	char text[1024];

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	errmsg_read_file(argv[1], file_from);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	errmsg_write_file(argv[2], file_to);
	while (f_read == 1024)
	{
		f_read = read(file_from, text, 1024);
		if (f_read == -1)
		{
			dprintf(STDERR_FILENO,
				"Error Can't read from file %s\n", argv[1]);
			exit(98);
		}
		f_write = write(file_to, text, f_read);
		if (f_write == -1)
		{
			dprintf(STDERR_FILENO,
					"Error Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	close_file(file_from);
	close_file(file_to);
	return (0);
}
