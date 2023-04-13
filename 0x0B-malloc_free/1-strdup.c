#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	char *abc;
	int m, n = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	m = 0;
	while (str[m] != '\0')
		m++;

	abc = malloc(sizeof(char) * (m + 1));
	if (abc == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		abc[n] = str[n];
	}

return (abc);
}
