#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);

	if (res == NULL)
	{
		exit(98);
	}
	return (res);
}
