#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: pointer to destination address
 * @src: pointer to memory address that will be copy from
 * @n: size of element to copy from src
 * Return: destination address a.k.a dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

