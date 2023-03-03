#include "main.h"
/**
 * string_toupper function that changes all lowercase letters of a string to uppercase.
 * @x:string to be changed
 * return:  to a pointer of the changed string
 */
char *string_toupper(char *x)
{
	int i;

	i = 0;
	while (x[i])
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] -= 32;

		i++;
	}
	return (x);
}
