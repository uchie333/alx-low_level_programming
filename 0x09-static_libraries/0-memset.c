#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: Starting address
 * @b: Desired value
 * @n: Number of bytes changed
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
