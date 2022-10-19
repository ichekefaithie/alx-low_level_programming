#include "main.h"
/**
 * print_alphabet - Prints alphabet in lower case
 * Return: All good
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
