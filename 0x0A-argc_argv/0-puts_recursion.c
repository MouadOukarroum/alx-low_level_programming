#include "main.h"


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
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
