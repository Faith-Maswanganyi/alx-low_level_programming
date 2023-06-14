#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: the name of the file to read
 * @letters: the number of letters to be read and printed
 * Return: actual number of letters to read&print
 * (0) if fail/filename is NULL
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t b_read;
	ssize_t b_written;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer  = malloc(sizeof(char) * letters);
	b_read = read(fd, buffer, letters);
	b_written = write(STDOUT_FILENO, buffer, b_read);

	free(buffer);
	close(fd);
	return (b_written);
}
