#include <stdio.h>

/**
 * rev_string - prints reverse a string
 * @s: character
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int length = 0;


	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (i = length; i >= 0; i--)
	{
		s--;
	}
}
