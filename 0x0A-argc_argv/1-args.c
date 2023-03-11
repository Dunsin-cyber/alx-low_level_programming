#include <stdio.h>

/**
 * main - print the number of argument passed
 * @argc: argument counter
 * @argv: array of argument
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{	
		printf("%d\n", argc - 1);
	}
	return (0);
}
