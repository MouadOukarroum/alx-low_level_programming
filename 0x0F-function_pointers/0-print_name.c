#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: a call back function passed to print_name
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
