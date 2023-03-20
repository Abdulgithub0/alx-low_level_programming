#include "main.h"

/**
 * _strncat - take two addresses as input
 * Description:  a function that concatenates two strings up to n bytes
 * @dest: pointer to first argument
 * @src: pointer to second arg.
 * @n: src length
 * Return: first pointer aka dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (i < n)
	{
		dest[j] = src[i];
		if (src[i] == '\0')
			break;
		j++;
		i++;
	}
	return (dest);
}


