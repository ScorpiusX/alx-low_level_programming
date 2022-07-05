#include "main.h"
/**
*main - Entry point.
*Description: prints _putchar.
*Return: Always 0.
*/

int main(void)
{
	char rico[] = "_putchar";
	int i = 0;

	while (rico[i] != '\0')
	{
		_putchar(rico[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
