#include <stdio.h>

/**
 * _puts - prints out a string and a new line
 * @str: character
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
