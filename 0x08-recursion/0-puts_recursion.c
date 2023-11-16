#include "main.h"
#include <stdio.h>


/**
 * -puts_recursion - prints a string recursively to the stdout.
 * Description: this function uses _putchar fun to print an array or chars
 * to stdout using recursion.
 * Return: it doesn't return anything
 */

 void _puts_recursion(char *s)
 {
    int i; 
    for(i = 0; i < sizeof(s) / sizeof(*s); i++)
    {
        _putchar(s[i]);
    }
    _putchar('\n');
   
 }