#include "main.h"

/**
 * print_alphabet - prints alphabets to the console
 *
 * Return: nothing; it's a void function
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
