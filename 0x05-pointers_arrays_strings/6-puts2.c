#include "main.h"

/**
 * _strlen - counts the length of the string with a new line
 * @s: string
 * Return:int
 */

int _strlen(char *s);

/**
 * puts2 - prints every other character in a striong and a new line
 * @str: character
 * Return: void
 */


void puts2(char *str)
{
	int length, i;

	length =  _strlen(str);

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - counts the length of a string
 * @s: string to be counted
 * Return: integer'
 */



int  _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
