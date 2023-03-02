/**
 * _strncpy - copy a string
 * @dest: copy path
 * @src: string to copy
 * @n: bytes of string to copy
 * Return: strng copied
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';	
		i++;
	}

	return (dest);
}
