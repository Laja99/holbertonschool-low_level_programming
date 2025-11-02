#include "main.h"
/**
 * prime_check - helper function to check for prime
 * @n: number to check
 * @it: iterator
 * Return: 1 if prime, 0 if not
 */
int prime_check(int n, int it)
{
	if (n <= 1)
		return (0);
	if (it * it > n)
		return (1);
	if (n % it == 0)
		return (0);
	return (prime_check(n, it + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
