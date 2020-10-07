#include "holberton.h"

/**
 *factorial - returns the factoral of an int
 *@n: the number to get the factorial of
 *Return: the factorial
 */

int factorial(int n)
{
	int fct = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);


	if (n > 1)
	{
		fct = n * factorial(n - 1);
	}
	return (fct);
}
