#include <stdio.h>
/**
*main - Entry point.
*
*Description: print all numbers of base 10, starting from 0.
*
*Return: Always 0 (Success).
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
