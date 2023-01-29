#include <stdio.h>

/**
 * execute_before_main - function that excute itself before main
 *
 * Return: void
 */

void execute_before_main(void) __attribute__((constructor));

void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"bore my house upon my back!\n");
}
