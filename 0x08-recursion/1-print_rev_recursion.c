#include "main.h"

/**
 * _print_rev_recursion - prints a string reversed using recursion
 *
 * @s: a sring passed to be reversed
 * Return: nothing, it's a void function
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
