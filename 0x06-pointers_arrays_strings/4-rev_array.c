#include "main.h"
/**
 * reverse_array - This function reverses the content of an array of integers
 * @a: This is the pointer to the array of integers
 * @n: This represents the number of elements to be reversed
 * Returns nothing
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
