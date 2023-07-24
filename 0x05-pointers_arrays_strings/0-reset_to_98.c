#include "main.h"
/**
 * main - check the code
 * reset_to_98 - Resets value of pointer n to 98
 * @n: pointer whose value is changed
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *p;

	p = n;
	*p = 98;
}
