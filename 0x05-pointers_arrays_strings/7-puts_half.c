#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: string
 * Return: Int
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

/**
 * puts_half - prints the last half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len, tive, i;

	len = _strlen(str);
	tive = len % 2;

	if (tive == 0)
	{
		for (i = len / 2; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (tive != 0)
	{
		for (i = (len - 1) / 2; i < len; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
