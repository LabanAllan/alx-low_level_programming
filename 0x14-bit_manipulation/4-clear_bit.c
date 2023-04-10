#include <stdio.h>
#include "main.h"
/**
 * clear_bit- sets value of given bits to 0.
 * @n - pointer to the number to change.
 * @index- index to the bit to clea.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
