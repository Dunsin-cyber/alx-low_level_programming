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
		len++;
		s++;
	}
	return (len);
}


/**
 * *_strcpy - copy string pointed from an addrss to another
 * @dest: address
 * @src:address
 * Return: character
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
