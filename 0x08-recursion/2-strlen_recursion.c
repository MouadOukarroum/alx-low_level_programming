#include "main.h"

/**
 * _strlen_recursion - prints the length of an array
 * @s: the string which its length will be returned
 *Return: returns the length of the s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s > '\0')
	{
		length += _strlen_recursion(s + 1) + 1;
	}
	return (length);
}
