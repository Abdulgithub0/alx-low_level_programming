#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: total argument pass into the function through ...
 * @...: nth arguemnt
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list list;

	va_start(list, n);
	printf("%d", va_arg(list, int));
	for (i = 0; i < (n - 1); i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(list, int));
		}
		else
		{
			printf("%s%d", separator, va_arg(list, int));
		}
	}
	printf("\n");
	va_end(list);
}

