#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to the address of string
 * @accept: pointer to the address of substring
 * Return: subtsring lenght
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l, counter;

	i = 0;
	j = 0;
	counter = 0;
	while (*(s + i) != ' ')
	{
		i++;
	}
	while (*(accept + j) != '\0')
	{
		j++;
	}
	for (k = 0; k <= i; k++)
	{
		for (l = 0; l <= j; l++)
		{
			if (*(s + k) == *(accept + l))
			{
				counter++;
			}
		}
	}
	return (counter);
}

