#include <stdio.h>
#include "main.h"

/**
 * print_binary -  function that prints the binary representation of a number.
 * @n: decimal number to be printed as binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 0)
	{
		print_binary(n >> 1);
		_putchar('0' + (n & 1));
	}
}
