#include "main.h"
#include <stdlib.h>
/**
 * create_array - This function creates an array
 * @size: size of the array
 * @c: character
 * Return: NULL
 * Otherwise pointer to array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		/* Memory allocation failed */
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
