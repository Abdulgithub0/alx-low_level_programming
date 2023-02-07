#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * main - driver code for the program
 * @argc: total arguments passed to the program in cmd
 * @argv: pointer to each address of arguments passed in cmd
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *error, *buffer;

	int n, end_of_read, end_of_write, file_to, file_from;

	if (argc != 3)
	{
		error = "Usage: cp file_from file_to\n";
		write(STDERR_FILENO, error, strlen(error));
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (-1);
	/* open first argument for reading */
	file_from = open(argv[1], O_RDONLY);
	/* open second argument for writing into it */
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
	while ((end_of_read = read(file_from, buffer, 1024)) > 0)
	{
		end_of_write = write(file_to, buffer, 1024);
		if (end_of_write < 0 || file_to < 0)
		{
			error = "Error: Can't write to";
			error = strcat(error, *argv + 2);
			error = strcat(error, "\n");
			write(STDERR_FILENO, error, strlen(error));
			free(buffer);
			exit(99);
		}
	}
	if (file_from < 0 || end_of_read < 0)
	{
		error = "Error: Can't read from file";
		error = strcat(error, *argv + 1);
		error = strcat(error, "\n");
		write(STDERR_FILENO, error, strlen(error));
		free(buffer);
		exit(98);
	}
	if ((n = close(file_from)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		free(buffer);
		exit(100);
	}
	if ((n = close(file_to)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	close(file_from);
	close(file_to);
	free(buffer);
	return (0);
}
