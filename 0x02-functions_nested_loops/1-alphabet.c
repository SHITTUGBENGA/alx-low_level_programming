#include "main.h"

/**
 * print_alphabet - Entry point to our prototype
 * Description: It prints the alphabet in lower case and then adds a new line
 * Return: Nthing
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
