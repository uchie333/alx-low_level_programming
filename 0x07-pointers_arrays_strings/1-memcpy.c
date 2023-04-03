#include "main.h"
/**
 * _memcpy - A function copies n bytes from memory area src to memory area dest
 * @n: number of bytes
 * @src: memory area
 * @dest: destination for the transfer.
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		src[i] = dest[i];
		n--;
	}
	return (dest);
}
