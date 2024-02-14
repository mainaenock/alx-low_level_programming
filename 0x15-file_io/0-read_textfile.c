#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file
 * @filename: the file
 * @letters: number of letters it should read
 *
 * Return: 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t btread;
	char *buffer;

	buffer = (char *) malloc(letters);
	if (buffer == NULL)
	{
		return (0);
	}

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	btread = read(fd, buffer, letters);
	if (btread == -1)
	{
		close(fd);
		return (0);
	}
	close(fd);
	printf("%.*s",(int)btread, buffer);
	free(buffer);
	return (btread);

}
