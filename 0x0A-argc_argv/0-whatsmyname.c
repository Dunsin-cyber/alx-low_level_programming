#include <stdio.h>

/**
 * main - prints out the first argument passed from the command line
 * @argc: length of argv
 * @argv: array of arguments as strings
 * Return: Int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
