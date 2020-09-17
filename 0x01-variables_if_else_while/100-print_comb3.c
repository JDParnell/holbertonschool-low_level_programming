#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int t = '0';

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x >= t && y >= t && x != y)
			{
				putchar(x);
				putchar(y);
				if (x != '8' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		t++;
	}
	putchar('\n');
	return (0);
}
