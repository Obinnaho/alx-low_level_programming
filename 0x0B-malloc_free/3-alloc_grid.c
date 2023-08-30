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
	int **ego;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	ego = malloc(sizeof(int *) * height);

	if (ego == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		ego[a] = malloc(sizeof(int) * width);

		if (ego[a] == NULL)
		{
			for (; a >= 0; a--)
				free(ego[a]);

			free(ego);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			ego[a][b] = 0;
	}

	return (ego);
}
