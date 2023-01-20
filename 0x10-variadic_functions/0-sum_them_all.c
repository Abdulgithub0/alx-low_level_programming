#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -function that returns the sum of all its parameters
 * @n: total number of argument pass into the function
 * @...: nth argument
 *
 * Return: sum or 0 if otherwise
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;

	va_list arg;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(arg, n);
	for (i = 0; (unsigned int) i < n; i++)
		sum += va_arg(arg, int);
	return (sum);
}
