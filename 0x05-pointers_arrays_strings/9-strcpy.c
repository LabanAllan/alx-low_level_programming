#include "main.h"
/**
 * _strcpy - copy a string
 * Return value: the pointer to dest
 * @src: source value
 * @dest: Destination value
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
