#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element
 * @size:size of array
 * @array:array
 * @cmp:pointer to the function to be used to compare values
 * Return:-1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
		{
			return (k);
		}
	}
		return (-1);
}
