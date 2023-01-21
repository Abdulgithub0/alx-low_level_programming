#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - driver code for the simple calculator program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	char *symbol;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	symbol = (argv[2]);
	if ((get_op_func(argv[2]) == NULL) && (*(symbol + 1) == '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	num2 = (atoi(argv[3]));
	if ((*symbol == '/' || '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	num1 = (atoi(argv[1]));
	result = (get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);
	return (0);
}

