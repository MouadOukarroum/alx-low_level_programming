#include "main.h"


/**
 * print_alphabet_x10 - Prints alphabets in lowercase 10 times
 * 
 * Description: this function is intended to be called in main.c
 * Return: this is a void function, it doesn't return anything
 */

void print_alphabet_x10(void)
{
	int i;
	int j;
	
	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}	
}
