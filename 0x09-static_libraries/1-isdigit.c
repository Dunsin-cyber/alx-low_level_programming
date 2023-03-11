/**
 * _isdigit - checks if c is a digit
 * @c: integer to be checked
 * Return: 1 if it is a digit and 0 is not
 */

int _isdigit(int c)
{
	int i;

	i = '0';
	while (i <= '9')
	{
		if (i == c)
			return (1);
		i++;
	}
	return (0);
}
