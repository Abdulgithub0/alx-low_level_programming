#include "main.h"

/**
 * _strlen - take pointers as an agrument
 * Description: a function that returns the length of a string.
 * @s: A pointer parameter format
 * Return: length a.k.a 'i'
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

