#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * This program will print alphabets in lower case
 * Return: Always 0
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	{
		_putchar('\n');
	}
}

