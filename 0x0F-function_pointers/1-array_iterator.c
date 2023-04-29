#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - goes through the array
 * @size: size
 * @action:elem to be printed
 * @array: array
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (action == NULL || array == NULL)
	{
		return;
	}
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
