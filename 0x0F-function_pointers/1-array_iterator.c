#include "function_pointers.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - a function that prints a name.
 * @array: to be acted upon by call back function
 * @size: size of the array
 * @action: pointer to the call back func.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action((array[i]));
	}
}
