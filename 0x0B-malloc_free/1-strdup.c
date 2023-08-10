#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - This function duplicates a given string
 * @str: String to be duplicated
 * Return: A pointer to the duplicated string
 * NULL if str is NULL or memory allocation fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= length; i++)
	{
		duplicate[i] = str[i];
	}
	return (duplicate);
}
