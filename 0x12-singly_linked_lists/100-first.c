#include <stdio.h>

void __attribute__((constructor)) execute(void);
/**
 * execute - function that excute itself before main
 *
 * Return: void
 */

void execute(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
