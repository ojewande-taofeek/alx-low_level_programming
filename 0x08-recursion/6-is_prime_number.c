#include "main.h"

int prime_number(int n, int check);

/**
 * is_prime_number - The function returns 1 if the input integer is a prime
 *                   number, otherwise return 0
 * @n: The input integer
 * Return: 1, for prime number
 *         0, otherwise
 */

int is_prime_number(int n)
{
	int check = 2;

	if (n <= 1)
		return (0);
	return (prime_number(n, check));
}

/**
 * prime_number - The function checks for a prime number without initialization
 * @n: The input integer
 * @check: The divisor for the number inputted
 * Return: 1, if prime number
 *         0, if otherwise
 */

int prime_number(int n, int check)
{
	if (n % check == 0)
		return (0);
	if (n / check == 1)
		return (1);
	return (prime_number(n, (check + 1)));
}
