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
	int i = 1;
	int n;

	if (num < 0)
	{
		char sym = '-';
		write(1, &sym, sizeof('-'));
		num *= -1;
		i++;
	}

	if (num / 10 > 0)
		i = i + writenum(num / 10);

	n ='0' + num % 10;
	write(1, &n, sizeof(n));

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
