#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary value to decimal
 * @b : pointer to string to be converted
 * Return : Postive Integer
 */

unsigned int binary_to_uint(const char *b)
{

    int i = 0;
    int size = 0;
    unsigned int sum = 0;

    if (b == NULL)
        return (sum);

    /* find string length */
    while (b[size] != '\0')
        size++;
    size -= 1;

    while (b[i])
    {
        if ((b[i] != '0') && (b[i] != '1'))
            return (sum);

        if (b[i] == '1')
        {
            sum += (1 * (1 << size));
        }
        i++;
        size--;
    }

    return (sum);
}