#include "main.h"

/**
 * rev_string - prints reverse a string
 * @s: character
 * Return: void
 */

void rev_string(char *s)
{
	int i,length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (i = length; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
}
