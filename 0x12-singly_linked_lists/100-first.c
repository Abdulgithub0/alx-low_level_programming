#include <stdio.h>

/**
 * execute_before_main - function that excute itself before main
 *
 * Return: void
 */

void __attribute__((constructor)) execute_before_main(void);

void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
