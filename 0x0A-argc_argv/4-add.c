#include "stdio.h"
#include "stdlib.h"

/**
 * main - a program that add positive number
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char **argv)
{
	int i, j;

	j = 0;
	if (argc > 2)
	{
		for (i = 1; i < argc; i++)
		{
			if ((atoi(argv[i]) != 0))
			{
				if ((atoi(argv[i]) > 0))
				{
					j += atoi(argv[i]);
				}
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", j);
		return (0);
	}
	printf("%d\n", j);
	return (0);
}
