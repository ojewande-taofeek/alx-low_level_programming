#include "main.h"

/**
 * main - The program prints the minimum number of coins to make
 *         change for an amount of money
 * @argc: The argument count of type int
 * @argv: The argument vector that points to an array
 * Return: 1, if argc is 1
 *         the minimum number of coins
 */

int main(int argc, char *argv[])
{
	int cents, qtrs = 0, dime = 0, cent_6 = 0, nick = 0, pennyny = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		cents = atoi(argv[1]);
		if (cents >= 25 && cents <= 999)
		{
			qtrs = (cents / 25);
			cents -= (qtrs * 25);
		}
		if ((cents % 6 == 0) || cents == 19)
		{
			cent_6 = cents / 6;
			cents -= (cent_6 * 6);
		}
		if (((cents >= 15 && cents < 24) && (cents != 19)) || cents == 10)
		{
			dime = (cents / 10);
			cents -= (dime * 10);
		}
		if ((cents > 5 && cents < 15) && (cents != 10))
		{
			cent_6 = (cents / 6);
			cents -= (cent_6 * 6);
		}
		if (cents == 5)
			nick = cents / 5;
		if (cents > 0 && cents < 5)
			pennyny = cents;
	}
	printf("%d\n", qtrs + dime + cent_6 + nick + pennyny);
	return (EXIT_SUCCESS);
}
