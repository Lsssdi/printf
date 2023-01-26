#include <stdio.h>
#include <unistd.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * writenum - prints out an int
 * @num: the intgeger to be printed
 *
 * Return: total number of charcters in num
 */

int writenum(int num)
{
	int i = 1;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
		i++;
	}

	if (num / 10 > 0)
		i = i + writenum(num / 10);

	_putchar('0' + num % 10);

	return (i);
}

/**
 * writestring - prints a string
 * @s: string to be printed
 *
 * Return: number of characters printed
 */

int writestring(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		write(1, (s + i), sizeof (*(s + i)));
		i++;
	}

	return (i);
}
