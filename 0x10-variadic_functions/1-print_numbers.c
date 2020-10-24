#include "variadic_functions.h"

/**
 *print_numbers - prints an indefinite list of numbers
 *@separator: what to print between numbers
 *@n: the number of ints to print
 *Return: void no return
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
