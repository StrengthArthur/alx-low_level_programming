#include "main.h"
#include <stdio.h>

/**
 * main - checks the code
 * Return: Always 0
 */
int main(void)
{
	char c;

	c = '0';
	_putchar(c);
	_putchar(_isdigit(c) + '0');

	c = 'a';
	_putchar(c);
	_putchar(_isdigit(c) + '0');

	return (0);
}
