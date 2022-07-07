#include "main.h"

/**
 * print_sign - Entry point to check the code
 * @n: inputed number
 * Description: this function prints the sign of a number
 * Return: returns 1 if the number is positive
 * 0 if the number is zero and
 * -1 if the number is negative
 */

int print_sign(int n);
{
	int value;

	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0);
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}

	return (value);
}
