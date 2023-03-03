#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int  dlen = 0;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
