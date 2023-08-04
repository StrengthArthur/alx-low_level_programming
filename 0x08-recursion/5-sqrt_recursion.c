#include "main.h"
/**
 *_sqrt_helper - This funtion performs a binary search to find the square root
 *@n: integer
 *@start: the start point of the search for square root
 *@end: the end point of the search for square root
 *Return: -1
 */
int _sqrt_helper(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}
	mid = (start + end) / 2;

	square = mid * mid;
	
	if (square == n)
	{
		return (mid);
	}
	else if (square > n)
	{
		return (_sqrt_helper(n, start, mid - 1));
	}
	else
	{
		return (_sqrt_helper(n, mid + 1, end));
	}
}
/**
 *_sqrt_recursion - Function returns natural square root of an integer
 *@n: integer
 *Return: -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
{
	return (-1);
}
	return (_sqrt_helper(n, 0, n));
}
