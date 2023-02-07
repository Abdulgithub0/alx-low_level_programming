#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: text file to write to
 * @text_content: string to read from
 *
 * Return: 1 or -1 if otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fdopen, fdwrite, lenght;

	if (!filename)
	{
		return (-1);
	}
	fdopen = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0700);
	if (fdopen < 0)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		lenght = strlen(text_content);
		fdwrite = write(fdopen, text_content, lenght);
		if (fdwrite < 0)
		{
			close(fdopen);
			return (-1);
		}
	}
	close(fdopen);
	return (1);
}
