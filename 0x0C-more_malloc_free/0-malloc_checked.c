#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD

=======
#include "main.h"
>>>>>>> d3df53a7c33932227161ad94a268e2329adf08fc
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
<<<<<<< HEAD
	void *x;
	x = malloc(b);

	if (x == NULL)
=======
	void *n;

	n = malloc(b);

	if (n == NULL)
>>>>>>> d3df53a7c33932227161ad94a268e2329adf08fc
		exit(98);
	return (n);
}
