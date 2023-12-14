#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * binary_to_uint - converts binary to int
 * @b: a binary string to convert to int
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int integer = 0;


	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		integer = integer * 2 + (*b++ - '0');
	}
	return (integer);
}
