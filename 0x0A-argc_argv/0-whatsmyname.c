#include <stdio.h>


/**
 * main - prints the name of the file
 * @argc: is the number of cli args
 * @argv: is the pointer to the cli args array
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
