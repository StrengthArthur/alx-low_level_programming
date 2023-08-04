#include "main.h"
/**
 * prime - Returns if a number is prime or not
 * @i: Value ++
 * @n: Checks value
 * Return: 1 and 0
 */
int prime(int i, int n)
{
	if (n <= 1)
		return (0);
	else if (i >= n)
		return (1);
	if (n % i != 0 && i != n)
		return (prime(i + 1, n));
	else
		return (0);
}

/**
 * is_prime_number - This function returns 1 if input is a prime number
 * @n: integer
 * Return: prime
 */
int is_prime_number(int n)
{
	return (prime(2, n));

}
