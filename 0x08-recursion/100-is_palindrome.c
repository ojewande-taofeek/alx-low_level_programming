#include "main.h"

int _strlen(char *s);
int find_palindrome(char *s, int len, int idx);

/**
 * is_palindrome - Function that returns 1 if a string is a palindrome
 *                 and 0 if not
 * @s: The formal parameter of string constant
 * Return: 1, if a palindrome
 *         0, otherwise
 *         An empty string is a palindrome
 */

int is_palindrome(char *s)
{
	int len = _strlen(s), idx = 0;

	if (len == 0)
		return (1);
	len--;
	return (find_palindrome(s, len, idx));
}

/**
 * find_palindrome - Function that compares the characters of s
 *                   by increasing idx and decreasing len
 * @len: The length of the string constant s
 * @idx: The character counting from index 0
 * @s: The string constant
 * Return: same conditions as is_palindrome()
 */

int find_palindrome(char *s, int len, int idx)
{
	int half = (_strlen(s)) / 2;

	if (s[idx] != s[len])
		return (0);
	if (idx == half)
		return (1);
	return (find_palindrome(s, (len - 1), (idx + 1)));
}

/**
 * _strlen - Funtion that returns the length of a string constant
 * @s: The string constant
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	for (; s[len]; len++)
		;
	return (len);
}
