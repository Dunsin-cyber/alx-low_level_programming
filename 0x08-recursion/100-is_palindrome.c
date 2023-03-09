/** count_length - counts the length of a string
 * @a: string
 * Return: int
 */

int count_length(char *a)
{
	int len = 0;
	
	while (*a != '\0')
	{
		len++;
		a++;
	}

	return (len);

}

/**
 * is_palindrome - checks if a string is palindrome or not
 * @s: string
 * Return: int
 */

int is_palindrome(char *s)
{
	int len = 0;

	int len_ = count_length(s);

	if (*s == '\0' || len_ == 0)
		return (len);

	else if (is_palindrome(s + 1) == is_palindrome((len_ + 1)))
	{
		return (1);
	}
	else
		return (0);


}
