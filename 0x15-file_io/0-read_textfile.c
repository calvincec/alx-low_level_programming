#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and
 * prints to standard output
 * @filename: name of file to read
 * @letters: number of letters
 * Return: Actual number of letter it could read and print
 */
size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t bytes_read, bytes_written;

	if (!filename)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	close(fd);

	free(buffer);

	return (bytes_written);
}
