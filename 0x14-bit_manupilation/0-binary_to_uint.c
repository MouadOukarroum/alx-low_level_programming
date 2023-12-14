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
	unsigned int i;

	if (b == NULL)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (!isdigit(b[i]))
			return (0);
		if (b[i] == '1')
			integer |= (1 << (strlen(b) - i - 1));
	}
	return (integer);
}
