#include "main.h"
/**
 *_abs - main Entry.
 *@ab: parameter for the function.
 *Return: Absolute zero 0.
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
