#include "search_algos.h"

/**
* recursive_search - a function that searches for the first occurence of 
* value in an array of integers using the binary search algorithm
* @arr: is a pointer to the first element of the array to search
* @start: first index of the array
* @end: last index
* @value: target value to look for in the array
* Return: value index if found or -1 if otherwise
*/

int recursive_search(int arr[], int start, int end, int x)
{
	int mid, i;

	mid = start + (end - start) / 2;
	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
			printf("%d, ", arr[i]);
		else
			printf("%d\n", arr[i]);
	}
	if (x == arr[mid])
	{
		if (mid == start || arr[mid - 1] != x)
			return mid;
		else
			return recursive_search(arr, start, mid - 1, x);
	}
	else if (x < arr[mid])
	{
		return recursive_search(arr, start, mid - 1, x);
	}
	else
	{
		return recursive_search(arr, mid + 1, end, x);
	}
}

/**
 * advanced_search - a function that searches for the first occurence of 
 * value in an array of integers using the binary search algorithm
 * @array: is a pointer to the first element of the array to search
 * @size: size of the array
 * @value: target value to look for in the array
 * Return: value if found or -1 if otherwise
 */

int advanced_binary(int *array, size_t size, int value)
{
	return recursive_search(array, 0, size - 1, value);
}
