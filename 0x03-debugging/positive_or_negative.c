#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *positive_or_negative - checks if a number n is positive, negative or zero
 *@n: integer
 *Return: Always 0 (Success)
 */


int positive_or_negative(int n)
{
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else if (n < 0)
{
printf("%i is negative\n", n);
}
return (0);
}
