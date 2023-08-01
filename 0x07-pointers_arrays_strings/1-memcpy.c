#include "main.h"
/**
 *_memcpy - This function copies memory area
 *@dest: memory to be stored
 *@n: number of bytes
 *@src: memory to be copied
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
