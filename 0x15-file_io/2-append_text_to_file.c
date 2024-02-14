#include "main.h"

/**
 * append_text_to_file - adds text add end of file
 * @filename: name of file
 * @text_content: contents of the file
 *
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writtenbit;

	if (filename == NULL)
	{
		return (-1);
	}
	if (access(filename, F_OK) == -1)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
		if (text_content != NULL)
		{

			writtenbit = write(fd, text_content, strlen(text_content));
			if (writtenbit == -1)
			{
				close(fd);
				return (-1);
			}
		}
		close(fd);
		return (1);
}
