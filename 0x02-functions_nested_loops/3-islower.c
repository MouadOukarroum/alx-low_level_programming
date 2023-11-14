#include "main.h"

/**
 * _islower - checks if c is lowercase
 * c - is the character passed to islower function
 *Return: it return 1 if c is lowercase and 0 if it is not.
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
