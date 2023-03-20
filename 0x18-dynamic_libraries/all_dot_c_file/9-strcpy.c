#include "main.h"

/**
 * _strcpy - take pointer to both source and destination as argument
 * Description: function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: Destination value
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	;
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

