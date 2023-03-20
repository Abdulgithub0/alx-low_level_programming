#include "main.h"

/**
 * _isupper - take input
 * Description: function that checks for uppercase character
 * @c: parameter format
 * Return: 1 if true or 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

