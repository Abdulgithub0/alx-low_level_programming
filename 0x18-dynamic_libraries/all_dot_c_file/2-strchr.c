#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: pointer to the address that will be used locate the intended char
 * @c: parameter variable for the char that will be look for
 * Return: address of the char if found or NULL if not
 */

char *_strchr(char *s, char c)
{
	int i;

	i = -1;
	do {
		i++;
	} while (*(s + i) != c);
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (NULL);
	}
}
