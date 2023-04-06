#include "main.h"
/**
 * factorial - factor of the numbers
 * @n: number to be factored
 * Return: If n is lower than 0, return -1 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n >= 0 && n <= 1)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
