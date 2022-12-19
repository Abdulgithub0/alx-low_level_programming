#include "main.h"

/**
 * _print_rev - take pointers
 * Description: function that prints a string, in reverse, followed by a new line.
 * @s: A pointer parameter format
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}

