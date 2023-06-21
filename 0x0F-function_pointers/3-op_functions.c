#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - The function adds two integers
 * @a: The first integer
 * @b: The second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - The function subtracts two integers
 * @a: The first integer
 * @b: The second integer
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - The function multiplication of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: multiply of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - The function divides two integers
 * @a: The first integer
 * @b: The second integer
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - The function finds the module of two integers
 * @a: The first integer
 * @b: The second integer
 * Return: module of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
