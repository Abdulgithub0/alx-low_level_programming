#include "function_pointers.h"

/**
 * print_name - a function that prints a name.
 * @name: name to be printed
 * @f: pointer to the call back func that will print name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
