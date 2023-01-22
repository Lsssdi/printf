#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - prinst formatted string to standard output
 * @format: formatted string
 *
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	char* fmts[] = {"%c", "%s", "%d", "%i"};
	int i = 0;
	int cnum = 0;

	va_list string;

	va_start(string, format);

	while (*(format + i))
	{
		if (format[i] == fmts[0][0] && format[i + 1] == fmts[0][1])
		{
			char c = va_arg(string, int);
			write(1, &c, 1);
			cnum++;
			i++;
		}
		else if (format[i] == fmts[1][0] && format[i + 1] == fmts[1][1])
		{
			cnum += writestring(va_arg(string, char *));
			i++;
		}
		else if (format[i] == fmts[2][0] && format[i + 1] == fmts[2][1])
		{
			cnum += writenum(va_arg(string, int));
			i++;
		}
		else if(format[i] == fmts[3][0] && format[i + 1] == fmts[3][1])
		{
			cnum += writenum((int) va_arg(string, int));
			i++;
		}
		else
		{
			write(1, &format[i], sizeof(format[i]));
			cnum++;
		}

		i++;
	}

	va_end(string);
	return (cnum);
}
