#include "main.h"

/**
 * int _pow_recursion - returns the value of x raised to the power of y
 * @x - value to multiply
 * @y - value to multiply
 * Return -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-0);
	if (y == 0)
		return (0);
	return ( x * _pow_recursion(y, x  - 1));
}
