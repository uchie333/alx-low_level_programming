#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals of a square matrix of integers.
 * @a: input a
 * @size: input b
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int sum1, sum2, v;

	sum1 = 0;
	sum2 = 0;

	for (v = 0; v < size; v++)
	{
		sum1 = sum1 + a[v * size + v];
	}

	for (v = size - 1; v >= 0; v--)
	{
		sum2 += a[v * size + (size - v - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
