#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array of
 * integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: size of the array
 * @value: target value to look for in the array
 * Return: value if found or -1 if otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	if (array && size >= 1)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
