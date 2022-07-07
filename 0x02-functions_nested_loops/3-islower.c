#include "main.h"

/**
 * _islower - Check the main
 * @c: An input character to be checked
 * Description: function uses _putchar function to print
 * alphabet in lowercase
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c)
{
	char j;
	int lower = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
			lower = 1;
	}

	return (lower);
}
