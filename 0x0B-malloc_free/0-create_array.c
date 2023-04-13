#include "main.h"
#include <stdlib.h>
/**
* create_array - array of size and assign char c
* @size: size of the array
* @c: char
* Description: creat array of size size and assign char c
* Return: pointer to array, NULL if fail
*
*/
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int m;

	string = malloc(sizeof(char) * size);
	if (size == 0 || string == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < size; m++)
	{
		string[m] = c;
	}
	return (string);
}
