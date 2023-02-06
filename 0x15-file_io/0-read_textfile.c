#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - function that reads and writes a textfile to stdout.
 * @filename: text file to write from
 * @letters: number of characters to be printed
 *
 * Return: number of character printed or 0 if otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open_text, total_read, total_write;

	char *buf;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	open_text = open(filename, O_RDONLY);
	if (open_text < 0)
	{
		free(buf);
		return (0);
	}
	total_read = read(open_text, buf, letters);
	if (total_read < 0)
	{
		free(buf);
		return (0);
	}
	total_write = write(STDOUT_FILENO, buf, total_read);
	if (total_write < 0 || total_write != total_read)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(open_text);
	return (total_write);
}
