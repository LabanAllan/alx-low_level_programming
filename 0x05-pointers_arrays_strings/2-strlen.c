#include <stdio.h>
#include "main.h"
/**
 * _strlen - Returns the length of the string.
 * @s:to get its length
 * return: the length of @str.
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
