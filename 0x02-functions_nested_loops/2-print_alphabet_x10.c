#include "main.h"

/**
 *print_alphabet_x10 - prints 10 times the alphabets in lowercase
 *Returns void
 */

void print_alphabet_x10(void)
{
	char letters;
	int count;

	for (count = 1; count <= 10; count++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
