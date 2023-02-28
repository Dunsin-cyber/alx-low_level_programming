/**
 * swap_int - swaps the values of two integers a and b
 * @a: Integer
 * @b: Integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
