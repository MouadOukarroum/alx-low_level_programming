#include "function_pointers.h"


/**
 * array_iterator - excutes a function on each given arr element
 * @array: array of elements
 * @size: size of the array
 * @action: the function pointer passed to array_iterator
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *last = array + size - 1;

	if (array && size && action)
		while (array <= last)
			action(*array++);

}
