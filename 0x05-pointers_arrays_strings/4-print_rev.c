#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int x;
	int length = 0;
	{
	while (s[length] != '\0')
	length++;
	}
	for (x = length - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	{
		_putchar('\n');
	}
}
