#include "main.h"

/**
  * append_text_to_file - Appends text at the end of a file
  * @filename: Name of the file
  * @text_content: String to be addeed to the end of the file
  * Return: 1 on success or -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t num;

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!filename)
		return (-1);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		num = write(fd, text_content, strlen(text_content));
		if (num == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
