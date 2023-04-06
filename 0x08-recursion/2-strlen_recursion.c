#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string length measured
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length += _strlen_recursion(s + 1);
		length++;
	}
	return (length);
}
