#include "main.h"

/**
 *print_alphabet - list all the alphabet in lowercase
 *Return 0 as Success
 */

void print_alphabet(void)
{
	char lower_alpha;

	lower_alpha = 'a';

	while (lower_alpha <= 'z')
	{
		_putchar(lower_alpha);
		lower_alpha++;
	}
	_putchar('\n');
}
