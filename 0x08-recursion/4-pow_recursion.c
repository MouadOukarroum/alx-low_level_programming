#include "main.h"

/**
 * _pow_recursion - clalculates the power of a given num using
 * recursion
 * @x: the number to be raised to the power of:
 * @y: of this other number
 *Return: returns the power of x to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else
	{
		return (x *= _pow_recursion(x, (y - 1)));
	}
}
