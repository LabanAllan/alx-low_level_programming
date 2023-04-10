#include <stdio.h>
#include "main.h"
/**
 *  set_bit- sits a bit value given to index 1.
 *  @index- index to a bit set to 1.
 *  @n - pointer to  number to change.
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
