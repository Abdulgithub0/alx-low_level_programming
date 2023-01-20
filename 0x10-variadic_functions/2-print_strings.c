#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: total strings pass into the function through ...
 * @...: nth arguemnt
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	char *first_string, *other_string;

	va_start(list, n);
	first_string = va_arg(list, char *);
	if (first_string == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", first_string);
	}
	for (i = 0; i < (n - 1); i++)
	{
		other_string = va_arg(list, char *);
		if (other_string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			if (separator == NULL)
			{
				printf("%s", other_string);
			}
			else
			{
				printf("%s%s", separator, other_string);
			}
		}
	}
	printf("\n");
	va_end(list);
}

