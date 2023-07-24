#include "main.h"
/**
 * main - checks the code
 * swap_int - This function swaps the values of two integers a and b
 * @a: Integer to swap
 * @b: Integer to swap
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
