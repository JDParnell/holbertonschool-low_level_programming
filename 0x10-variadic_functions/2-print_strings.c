#include "variadic_functions.h"

/**
 *print_strings - prints an indefinite list of strings
 *@separator: what to print between numbers
 *@n: the number of ints to print
 *Return: void no return
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	va_list check;

	va_start(ap, n);
	va_start(check, n);

	for (i = 0; i < n; i++)
	{
		if (va_arg(check, char *) == NULL)
		{
			printf("(nil)");
			va_arg(ap, char *);
		}
		else
			printf("%s", va_arg(ap, char *));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

}
