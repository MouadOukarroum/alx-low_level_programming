#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success 89 or 99 on failure
 */


int main(int argc, char *argv[])
{
	int (*fun)(int, int), a, b;

	if (argc != 4)
		printf("Error\n"), exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	fun = get_op_func(argv[2]);
	if (!fun)
		printf("Error\n"), exit(99);

	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
		printf("Error\n"), exit(100);

	printf("%d\n", fun(a, b));

	return (0);
}
