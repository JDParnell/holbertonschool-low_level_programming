#include "variadic_functions.h"

/**
 *print_all - prints an indefinite number of anything
 *@format: the format of what will be passed to the code
 *Return: void no return
 */


void print_all(const char * const format, ...)
{	va_list ap;
	int i = 0, j, k;
	char *str;

	va_start(ap, format);
	j = i + 1;
	while (format[i] != '\0' && format != NULL)
	{	k = 0;
		switch (format[i])
		{case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
			{       printf("(nil)");
				break; }
			printf("%s", str);
			break;
		default:
			k = 1;
			break; }
		j = i + 1;
		while (format[j] != '\0' && k != 1)
		{
			switch (format[j])
			{ case 'c': case 'i': case 'f': case 's':
			{	printf(", ");
				k = 1;
				break; }
			default:
				break; }
			j++; }
		i++; }
	printf("\n");
	va_end(ap); }
