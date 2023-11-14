#include "main.h"

/**
 * _isalpha - check if a char is a letter 
 * @c: char passed to the function to be checked
 * Return: 1 if c is a letter 0 if it is not
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}

