#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - This applies a function to each element of an array
 * @array: An array of integers
 * @size: The size of the array
 * @action: The function to apply to each element
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
