#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - This function searches for an integer in an array
 * @array: An array of integers
 * @size: The size of the array
 * @cmp: The comparison function to use
 * Return: Index of the first element for which cmp
 * function doesnot return 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}


