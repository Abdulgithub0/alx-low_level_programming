#include "main.h"

/**
 * _islower - take int c as input
 * Description: check if int c islower or not
 * @c: is an integer data type to be check for
 * Return: 1 if yes and 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

