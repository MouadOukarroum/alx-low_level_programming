#include "main.h"
#include <stdio.h>


/**
 * _puts_recursion - prints a string recursively to the stdout.
 * @s: is the pointer to the string giving by the test funtcion
 * Description: this function uses _putchar fun to print an array or chars
 * to stdout using recursion.
 * Return: it doesn't return anything
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('');
	}

	_putchar(*s);
	_puts_recursion(s + 1);
	_putchar('\n');
}
