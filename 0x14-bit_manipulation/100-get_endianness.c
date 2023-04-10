#include "main.h"
#include <stdio.h>
/**
 *  get_endiannes - function that checks the endianness.
 *  Return 0 for big 1 for little.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) & i;

	return (*c);
}
