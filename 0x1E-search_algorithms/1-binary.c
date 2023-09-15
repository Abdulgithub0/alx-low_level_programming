#include "search_algos.h"

/**
 * binary_search - a function that searches for a value in an array of
 * integers using the binary search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: size of the array
 * @value: target value to look for in the array
 * Return: value if found or -1 if otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int r_end, l_end, mid, i;

	l_end = 0;
	mid = 0;
	r_end = size - 1;
	while (l_end <= r_end)
	{
		printf("Searching in array: ");
		for (i = l_end; i <= r_end; i++)
		{
			if (i != r_end)
			{
				printf("%d, ", array[i]);
			}
			else
			{
				printf("%d\n", array[i]);
			}
		}
		mid = (l_end + r_end) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (value < array[mid])
		{
			r_end = mid - 1;
		}
		else
		{
			l_end = mid + 1;
		}
	}
	return (-1);
}
