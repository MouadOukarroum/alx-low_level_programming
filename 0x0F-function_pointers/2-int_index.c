#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an int
 * @array: array of ints
 * @size: size of the array
 * @cmp: pointer to a function
 * Return: returns a n int
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
