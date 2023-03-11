#include "main.h"

/** _isupper - prints 1 if c is uppercase and 0 if c is lowecase
 * @c: character
 * Return: integer
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	
	return (0);
}
