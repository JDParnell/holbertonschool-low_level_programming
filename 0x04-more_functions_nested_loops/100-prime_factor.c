#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 *main - find the largest prime factor of 612852475143
 *Return: always 0
 */

int main(void)
{
	long base = 612852475143;
	long max, n, i;

	n = base;
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	max = n;

	printf("%lu\n", max);
	return (0);
}
