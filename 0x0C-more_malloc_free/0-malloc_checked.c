#include <stdlib.h>
#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD

=======
#include "main.h"
>>>>>>> d3df53a7c33932227161ad94a268e2329adf08fc
=======
#include "main.h"
>>>>>>> 3141b63525d96f4d173325a98ebda250aff7d41c
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
<<<<<<< HEAD
<<<<<<< HEAD
	void *x;
	x = malloc(b);

	if (x == NULL)
=======
=======
>>>>>>> 3141b63525d96f4d173325a98ebda250aff7d41c
	void *n;

	n = malloc(b);

	if (n == NULL)
<<<<<<< HEAD
>>>>>>> d3df53a7c33932227161ad94a268e2329adf08fc
=======
>>>>>>> 3141b63525d96f4d173325a98ebda250aff7d41c
		exit(98);
	return (n);
}
