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
	int z;
	int t = '0';

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x >= t && y >= t && z >= t && x != y && x != z && y != z)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != '7' || y != '8' || z != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		t++;
	}
	putchar('\n');
	return (0);
}
