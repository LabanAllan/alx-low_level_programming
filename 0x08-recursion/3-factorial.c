#include "main.h"

/**
 * factorial -calculate factorial of anumber
 * @n - nuber to cal culate factorial
 * Return :interger value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
