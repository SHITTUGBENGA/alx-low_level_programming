#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;

	for (i = '56'; i <= '57'; i++)
	{
		for (j = i + 1; j < '58'; j++)
		{
			putchar(i);
			putchar(j);
			if (i != '56' || j != '57')
			{
				putchar(',');
				putchar(' ');

			}
		}
	}
	putchar('\n');

	return (0);
}
