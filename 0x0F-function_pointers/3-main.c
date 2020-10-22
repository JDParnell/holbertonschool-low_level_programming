#include "3-calc.h"


/**
 *main - recieves commandline arguments and send them to math stuffs
 *@argc: number of arguments
 *@argv: the array of arguments
 *Return: 0 on success, 98 if not 3 arguments, 99 if wrong operator, 100 if div
 *or mod by 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	char o = argv[2][0];

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (strlen(argv[2]) != 1 || (o != '+' && o != '-' && o != '*'
				     && o != '/' && o != '%') || argv[2] == NULL
		)
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0 && (o == '/' || o == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}
