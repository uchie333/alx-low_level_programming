#include "main.h"
/**
 * _islower - checks for a lowercase character
 * @c: character to be checked
 * Return: 1 for lowercase char, 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}