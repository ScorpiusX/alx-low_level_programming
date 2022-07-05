#include <main.h>
#include <stdio.h>
/**
*main - Entry point.
*Description: prints _putchar.
*Return: Always 0.
*/

int main(void)
{
	char putchar[] = "_putchar";
	int i = 0;

	while (putchar[i] != '\0')
	{
		_putchar(putchar[i]);
		i++;
	}
	putchar('\n');

	return (0);
}
