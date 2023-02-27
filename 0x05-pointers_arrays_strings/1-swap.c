#include "main.h"

/**
 * main -function swap_int  swaps intager of the two integers
 * @a this is the interger to swap
 * @b this is the interger to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
