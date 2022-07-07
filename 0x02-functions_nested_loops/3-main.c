#include "main.h"

/**
* main: Entry point to check the code for 3-_islower
* Description: this code checks and print lower case character 
* Return: returns 1 if it is lowercase and 0 otherwise
*/

int main(void)
{
	int i;

	i = _islower('H');
	_putchar(i + '0');
	i = _islower('o');
	_putchar(i + '0');
	i = _islower(108);
	_putchar(i + '0');

	_putchar('\n');

	return (0);
}
