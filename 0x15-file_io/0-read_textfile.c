#include "main.h"

/**
  * read_textfile - Reads a textfile and sends the output using POSIX
  * @filename: File Path
  * @letters: Number of letters to print
  * Return: Actual number to be printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t num;
    char *text;
    int file;

    if (filename == NULL)
	    return (0);
    text = malloc(sizeof(char) * letters + 1);
    if (text == NULL)
	    return (0);
    file = open(filename, O_RDONLY);
    if (file == -1)
    {
	    free(text);
	    return(0);
    }
    num = read(file, text, sizeof(char) * letters);
    if (num == -1)
    {
	    free(text);
	    close(file);
	    return (0);
    }
    free(text);
    close(file);
    return (num);
}
