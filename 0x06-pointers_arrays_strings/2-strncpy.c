#include "main.h"

/**
 *  _strncpy function that concatenates two strings
 * @src: input value
 * @dest: input value
 * @n: input valu
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\n')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\n';
		j++;
	}
	return (dest);
}
