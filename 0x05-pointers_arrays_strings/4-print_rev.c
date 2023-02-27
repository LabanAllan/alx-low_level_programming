#include <stdio.h>
#include "main.h"
/**
 * function that prints a string, in reverse,
 * @s: is a string to print
 * Return : void
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	for (r -= 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
