#include "main.h"

/**
 *alloc_grid - Algorithms function
 *@width: pointer
 *@height: pointer
 *
 *Return: 1 or 0
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i = 0, j = 0;

	if (width < 0 || height < 0 || width * height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		printf("Not enough memory!");
		return (NULL);
	}
	for (i = 0; i < height; i++)
		array[i] = malloc(sizeof(int) * width);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}

/**
 * To-Do :  Variables Description
 *          Formt document
 */
