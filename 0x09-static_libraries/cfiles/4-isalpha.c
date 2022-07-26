#include "main.h"
/**
 * _isalpha - program that checks for Alphabet characters,
 * @c : look above.
 * Return: return 1 if theres an alphabet else return 0.
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
