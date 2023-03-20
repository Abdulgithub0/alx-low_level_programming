#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: pointer to the buffer address
 * @b: character to fill into the buffer
 * @n: sizeof buffer
 * Return: address a.k.a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

