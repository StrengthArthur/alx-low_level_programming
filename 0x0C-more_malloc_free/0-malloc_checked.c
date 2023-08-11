#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 *malloc_checked - This function allocated memory usin malloc
 *@b: memory size to be allocated
 *Return: ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
