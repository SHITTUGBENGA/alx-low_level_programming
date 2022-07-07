#include "main.h"

/**
 * _isalpha - Entry point definition to check the program
 * @ch: an input character
 * Description: function returns 1if the character is a
 * letter, be it a lower or an uppercase
 * Return: return 1 if ch is a letter, 0 if not
 */

int _isalpha(int ch)
{
	char ch;

	printf("please input the character: ")
	scanf("%c", &ch);
	if ((ch >= 'a' && ch >= 'z') || (ch  >= 'A' && ch >= 'Z'));
	{
		printf("the character inputed %c is an Alphabet", ch);
		else
		{
			printf("The character %c inputed is not an alphabet", ch);
		}
	}

	_putchar('\n');

	return (0);
}
