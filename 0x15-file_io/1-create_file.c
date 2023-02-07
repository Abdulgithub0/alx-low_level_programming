#include <sys/stat.h>
#include <fcntl.h>
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
	ssize_t open_text, total_write;

	int length, return_o;

	if (!filename)
		return (-1);
	length = 0;
	while (text_content[length] != '\0')
		length++;
	if ((return_o = open(filename, O_TRUNC)) < 0)
	{
		open_text = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	}
	else
	{
		open_text = open(filename, O_TRUNC);
	}
	if (open_text < 0)
	{
		return (-1);
	}
	total_write = write(open_text, text_content, length);
	if (total_write < 0)
	{
		return (-1);
	}
	close(open_text);
	return (1);
}
