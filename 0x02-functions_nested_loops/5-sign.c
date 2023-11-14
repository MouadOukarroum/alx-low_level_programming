#include "main.h"

/**
 * print_sign - checks if a number is positive of negative
 * and then it print an adequate sign
 * @n: is the number passed to the function to be checked
 * Return: 1 or 0 depending on the parameter
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	_putchar('-');
	return (-1);
}
