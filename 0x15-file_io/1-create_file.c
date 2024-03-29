#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates file if don't exist
 * @filename: the name of the file containing text
 * @text_content: inside filename
 *
 * Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t btwritten;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) == 0)
	{
		fd = open(filename, O_WRONLY | O_TRUNC);
	}
	else
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	}
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		btwritten = write(fd, text_content, strlen(text_content));

		if (btwritten == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);

}
