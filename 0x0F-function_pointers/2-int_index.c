#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: to be acted upon by call back function invoked by cmp
 * @size: size of the array
 * @cmp: pointer to the call back func.
 *
 * Return: index of the element or -1 if otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp((array[i])) != 0))
				return (i);
		}
	}
	return (-1);
}
