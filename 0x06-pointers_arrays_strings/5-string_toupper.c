#include "main.h"
/**
 * string_toupper function that changes all lowercase letters of a string to uppercase.
 * @x; pointer
 * return: x;
 */
char *string_toupper(char *x)
{
	int i;

	i = 0;
	while (x[i] != '\n')
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;

		i++;
	}
	return (x);
}
