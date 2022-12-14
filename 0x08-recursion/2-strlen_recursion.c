#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to the string address.
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	int strlen;

	strlen = 1;
	/*if (*s == '\0')*/
		/*return (strlen -1);*/
	if (*s != '\0')
	{
		return (strlen + _strlen_recursion(s + 1));
	}
	return (strlen - 1);
}
