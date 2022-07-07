#include "main.h"

/**
 * _isalpha - Entry point definition to check the program
 * @ch: an input character
 * Description: function returns 1if the character is a
 * letter, be it a lower or an uppercase
 * Return: return 1 if ch is a letter, 0 if not
 */

int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;

		}
	}

	return (isletter);
}
