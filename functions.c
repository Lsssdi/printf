#include <stdio.h>
#include <unistd.h>

/**
 * writenum - prints out an int
 * @num: the intgeger to be printed
 *
 * Return: total number of charcters in num
 */

int writenum(int num)
{
	int i = 0;

	if (num < 0)
	{
		putchar('-');
		num *= -1;
		i++;
	}

	if (num / 10 > 0)
		writenum(num / 10);

	putchar('0' + (num % 10));
	i++;

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

	while(*(s + i))
	{
		write(1, (s + i), sizeof(*(s + i)));
		i++;
	}

	return (i);
}
