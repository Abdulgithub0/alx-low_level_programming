#include "main.h"

/**
 * _isdigit - take int
 * Description: a function that checks for a digit (0 through 9)
 * @c: parameter format
 * Return: 1 if true or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

