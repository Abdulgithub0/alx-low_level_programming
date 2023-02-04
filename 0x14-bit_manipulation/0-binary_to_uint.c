#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint -function that converts a binary number to an unsigned int
 * @b: array of binaries
 *
 * Return: converted number or 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, k, m, l, q;

	j = 0;
	if (b == NULL)
		return (0);
	while (b[j] != '\0')
	{
		if ((b[j] == '0') || (b[j] == '1'))
		{
			j++;
		}
		else
		{
			return (0);
		}
	}
	k = j - 1;
	m = 0;
	l = 1;
	q = 0;
	i = 0;
	while (i < j)
	{
		if (b[i] == '1')
		{
			m += (l << k);
		}
		else
		{
			m += (q << k);
		}
		k--;
		i++;
	}
	return (m);
}

