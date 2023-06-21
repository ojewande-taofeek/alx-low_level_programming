#include "3-calc.h"

/**
 * main - The main function
 * @argc: The argument count
 * @argv: The argument vector
 * Return: 98, if argc != 3
 *         99, if the operator != +, -, *, / || %
 *         100, if / || % divided by 0
 */

int main(int argc, char *argv[])
{
	int calc, num1, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);
	if (*operator == '+' || *operator == '-' || *operator == '*' ||
			*operator == '/' || *operator == '%')
		;
	else
		{
			printf("Error\n");
			exit(99);
		}
	if (((*operator == '/' || *operator == '%') && num2 == 0) || get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(100);
	}
	calc = get_op_func(operator)(num1, num2);
	printf("%d\n", calc);
	return (0);
}
