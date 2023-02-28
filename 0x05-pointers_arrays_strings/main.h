#ifndef ALX
#define ALX

/**
 * reset_to_98 - updates the value a pointer points to, to 98
 * @n: Integer
 * Return: void
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps the values of two int passed into the function
 * @a: Integer
 * @b:Integer
 * Return: void
 */

void swap_int(int *a, int *b);

/**
 * _strlen - Returns the length of a string s
 * @s: Character
 * Return: Integer
 */

int _strlen(char *s);

/**
 * _puts - Prints a string with a new line
 * @str: Character
 * Return: void
 */

void _puts(char *str);

/**
 * print_rev - prints the reverse of a string with a new line
 * @s: Character
 * Return: void
 */

void print_rev(char *s);

/**
 * rev_string - Reverses a string
 * @s: Character
 * Return: void
 */

void rev_string(char *s);

/**
 * puts2 - prints each character of a string followed by a new line
 * @str : Character
 * Return : void
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string followed by a new line
 * @str: Character
 * Return: void
 */

void puts_half(char *str);

/**
 * print_array - prints n elements of an array
 * @n: Integer
 * @a: Integer
 * Return: void
 */

void print_array(int *a, int n);

/**
 * *_strcpy - copies the string in src to dest
 * @src: character
 * @dest: character
 * Return: character
 */

char *_strcpy(char *dest, char *src);


#endif
