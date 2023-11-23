#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates a range of integers
 * @min: first num of the range
 * @max: last num of the range
 * Return: a pointer to the range created, Null on failure
*/


int *array_range(int min, int max)
{
	int *ptr;
	int i, j;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = min; i <= (max - min); i++, j++)
	{
		ptr[i] = j;
	}
	return (ptr);
}
