#include "main.h"

/**
 * _strcmp - take two addresses as input
 * Description: a function that compares two strings
 * @s1: pointer to first argument
 * @s2: pointer to second arg.
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i, j, k, m;

	i = 0;
	j = 0;
	k = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	while (s1[k] == s2[k])
	{
		if (s1[k] == '\0' && s2[k] == '\0')
			break;
		k++;
	}
	if (k == i && k == j)
		m = 0;
	return (m);
}


