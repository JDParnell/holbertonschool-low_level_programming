#include "holberton.h"

/**
 *_do_prime - finds prime numbers
 *@n: the number being found
 *@prime: number being checked
 *Returns: 1 if prime, 0 if not
 */

int _do_prime(int n, int prime)
{
	if (prime == 1)
		return (1);
	else if (n % prime == 0)
		return (0);

	return (_do_prime(n, prime - 2));
}

/**
 *is_prime_number - determines if n is a prime number
 *@n: the number we are priming
 *Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int prime;

	if (n <= 1 || (n > 2 && n % 2 == 0))
		return (0);

	prime = n - 2;

	return (_do_prime(n, prime));
}
