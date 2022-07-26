#include "main.h"

/**
 * _strlen - Return the length of the string
 * @s: char type pointer
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
