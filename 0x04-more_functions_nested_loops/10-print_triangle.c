#include "main.h"
#include <stdio.h>

/**
 * Print triangles
 * @size: size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			 for (j = 1; j <= size; j++)
			 {
				 _putchar(' ');
			 }
			  for (j = 1; j <= size; j++)
			  {
					_putchar('#');
			  }
					_putchar('\n');
		}
	}
}
