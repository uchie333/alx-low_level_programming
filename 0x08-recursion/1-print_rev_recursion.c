#include "main.h"
/**
 * _print_rev_recursion - prints in reverse
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
	}
