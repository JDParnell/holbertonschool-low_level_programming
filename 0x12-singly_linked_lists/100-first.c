#include <stdio.h>

void premainprint(void) __attribute__ ((constructor));

/**
 *premainprint - prints before main
 *Return: void no return;
 */

void premainprint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
