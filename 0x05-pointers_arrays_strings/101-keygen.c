#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate random digits
 * Return 0
 */

int main()
{
	srand(time(0));
	printf("%d", rand());

	return (0);
}
