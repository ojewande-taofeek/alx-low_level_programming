#include "3-calc.h"

/**
 * get_op_func - The function selects the correct function
 *               to perform the operation asked by the user
 * @s: The ponter to the operator
 * Return: The calucated value, if successful
 *         NULL, if otherwise
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

	while (i < 6)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
