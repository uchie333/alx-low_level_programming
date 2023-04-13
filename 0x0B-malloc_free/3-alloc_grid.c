#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
	int **me;
	int m, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	me = malloc(sizeof(int *) * height);
	if (me == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < height; m++)
	{
		me[m] = malloc(sizeof(int) * width);
		if (me[m] == NULL)
		{
			for (; m >= 0; m--)
			{
				free(me[m]);
			}
			free(me);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			me[m][n] = 0;
		}
	}
	return (me);
}
