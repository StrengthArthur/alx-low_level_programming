#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Minimum value of the range(inclusive)
 * @max: Maximum value of the range(inclusive)
 * Return: A pointer to the newly crearted array or NULL in failure
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	arr = (int *)malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}

