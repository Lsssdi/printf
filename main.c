#include <limits.h>

#include <stdio.h>

#include "main.h"



/**
 *
 *  * main - Entry point
 *
 *   *
 *
 *    * Return: Always 0
 *
 *     */
int main(void)
{
	int len;
	int len2;

	_printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
	_printf("%s", "This sentence is retrieved from va_args!\n");
	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	/*_printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);*/
	_printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	/*_printf("%%");*/
	/*_printf("Should print a single percent sign: %%\n");*/
	/*_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait"
	 * , '\n');*/
	/*_printf(NULL);*/
	/*_printf("%");*/
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Negative:[%d]\n", -762534);
	len2 = printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	return (0);

}
