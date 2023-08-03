#include "main.h"
/**
 *_pow_recursion - This function calculates the power of a given number
 *@x: integer
 *@y: integer
 *Return: -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
