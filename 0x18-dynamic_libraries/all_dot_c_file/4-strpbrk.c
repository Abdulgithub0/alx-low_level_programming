#include "main.h"

/**
 * _strpbrk -function that searches a string for any of a set of bytes
 * @s: pointer to address of string that will be search
 * @accept: pointer to address of string that will lookout in *s
 * Return: pointer to byte that match or NULL otherwise
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

