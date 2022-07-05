#include "main.h"
/**
 *print_alphabet_x10 - Entry point.
 *Description: print 10 times alphabets in lower cases.
 *Return: Always 0 (success).
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
	i++;
}

