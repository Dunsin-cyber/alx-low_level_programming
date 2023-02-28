#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: character
 * Return: void
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	};

	s--;

	for (i = length; i >= 0; --i)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
