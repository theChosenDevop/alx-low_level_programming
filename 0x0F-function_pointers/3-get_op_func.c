#include "3-calc.h"

/**
* get_op_func - function
* @s: operator provided by the use
* Return: pointer to the function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
			{"+", op_add},
			{"-", op_sub},
			{"*", op_mul},
			{"/", op_div},
			{"%", op_mod},
			{NULL, NULL}
		};

		int i = 0;

	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
		return (ops[i].f);
		i++;
	}
	return (NULL);
}
