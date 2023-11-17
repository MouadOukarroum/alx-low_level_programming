#include "main.h"


/**
 * main - prints the name of the file 
 * @argc: is the number of cli args
 * @argv: is the pointer to the cli args array
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	_puts_recursion(argv[0]);
	
	return (0);
}
