#ifndef ALX
#define ALX

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *Return: On success 1.
 *On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);


/**
 *print_alphabet - print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 */

void print_alphabet_x10(void);


/**
 * _islower - checks if c is a lower character
 * @c: the character to check
 * Return: int
 */

int _islower(int c);



/**
 * _isalpha - checks if c is an alphabet
 * @c: the character to check
 * Return: int
 */

int _isalpha(int c);


/**
 * print_sign - prints the sign of n
 * @n: the number
 * Return: int
 */

int print_sign(int n);


/**
 * _abs - computes the absolute value of the intgeger
 * @int: integer
 * Return: int
 */

int _abs(int);


/**
 * print_last_digit - print the last digit of a integer
 * @int: integer
 * Return: last digit of number
 */

int print_last_digit(int);


/**
 *jack_bauer - print every minute of a day
 * Description: print minutes 00:00 to 23:59
 */

void jack_bauer(void);


/**
 *times_table - print multiplication table
 */

void times_table(void);

/**
 * add - add two integers
 * @a: first integer
 * @b: second integer
 * Return: sum
 */

int add(int a, int b);

/**
 * print_to_98 - print numbers n to 98
 * @n: integer argument
 */

void print_to_98(int n);

/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */

void print_times_table(int n);











#endif
