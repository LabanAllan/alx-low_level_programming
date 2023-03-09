#include "main.h"

/**
 *  _sqrt_recursion -  the function that return the square root of a number.
 *  @n;number to be square rooted
 *  Return; -1 when the interger is not a perfect number
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


	int _sqrt(int n, int i)
{
	int  sqrt = i * i;
	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
