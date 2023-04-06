#include "main.h"

/**
 * set_bit - the value of a bit is 1 at a given index.
 * @index: starting from 0 of the bit you have to set
 * @n: pointer number of i
 * Return: 1 if it worked correctly, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

