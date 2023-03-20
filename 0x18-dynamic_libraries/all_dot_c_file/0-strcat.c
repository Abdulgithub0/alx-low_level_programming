#include "main.h"

/**
 * _strcat - take two addresses as input
 * Description:  a function that concatenates two strings.
 * @dest: pointer to first argument
 * @src: pointer to second arg.
 * Return: first pointer
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[i] != '\0')
		i++;
	k = j + (i - 1);
	i = 0;
	while (i <= k)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	return (dest);
}


