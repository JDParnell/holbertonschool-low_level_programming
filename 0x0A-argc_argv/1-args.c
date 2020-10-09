#include "holberton.h"

/**
 *main - prints number of arguments received
 *@argc: number of arguments recieved
 *@argv: array of arguements recieved
 *Return: 0, always success
 */

int main(int argc, char *argv[])
{
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
