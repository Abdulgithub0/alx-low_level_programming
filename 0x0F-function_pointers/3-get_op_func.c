#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - selects the correct func to perform the op. ask by user
 * @s: store the address of operator symbol type by the user
 *
 * Return: the result of call back function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int i;

	i = 0;
	while (i < 5)
	{
		if ((strcmp(ops[i].op, s)) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[i].f);
}
