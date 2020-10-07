#include "holberton.h"


/**
 *_do_sqrt - finds the square root of n
 *@n: the number being rooted
 *@sqrt: the square root
 *Return: the square root
 */

int _do_sqrt(int n, int sqrt)
{
	if (sqrt == 0)
		return (-1);
	else if ((n / sqrt) == sqrt && (n / sqrt) * (n / sqrt) == n)
		return (sqrt);

	return (_do_sqrt(n, sqrt - 1));
}


/**
 *_sqrt_recursion - returns the square root of n
 *@n: the number to be square rooted
 *Return: the square root
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);

	sqrt = n / 2;
	return (_do_sqrt(n, sqrt));


}
