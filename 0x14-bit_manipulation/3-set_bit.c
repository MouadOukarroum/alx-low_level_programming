#include "main.h"

/**
 * set_bit - set  the bit at the index
 * @n: the number index
 * @index: the bit of to set
 *Return: 1 on success, -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n |= 1L << index));
}
