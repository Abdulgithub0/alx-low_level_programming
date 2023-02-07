#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of file to append data to.
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 if success or -1 if otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ofd_append, total_write, lenght;

	if (!filename)
		return (-1);
	ofd_append = open(filename, O_APPEND | O_WRONLY);
	if (ofd_append < 0)
		return (-1);
	if (text_content)
	{
		lenght = strlen(text_content);
		total_write = write(ofd_append, text_content, lenght);
		if (total_write < 0)
		{
			close(ofd_append);
			return (-1);
		}
	}
	close(ofd_append);
	return (1);
}
