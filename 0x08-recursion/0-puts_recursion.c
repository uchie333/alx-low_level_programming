#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints the line of string
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s);
	_puts_recursion(s += 1);
	}
	else
	{
	_putchar('\n');
	}
}
