#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts positive int to binary
 * @n: unsigned int
 * Return: binary
 */

void print_binary(unsigned long int n)
{
    int size = 0;
    unsigned long int copy = n, start = 1;

    while (copy > 0)
    {
        size++;
        copy >>= 1;
    }
    size -= 1;

    if (size > 0) /* create start based on size */
        start = start << size;

    while (start > 0) /* match each rightmost bit to see if 1 or 0 */
    {
        if (n & start)
            _putchar('1');
        else
            _putchar('0');

        start >>= 1;
    }
}