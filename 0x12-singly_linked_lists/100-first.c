#include <stdio.h>

/**
 * myConst - prints text before main
 *
 * Return: nothing
 */
void myConst(void) __attribute__((constructor));

void myConst(void)
{
	printf("You're beat! and yet, you must allow,\n")
	printf("I bore my house upon my back!\n");
}
