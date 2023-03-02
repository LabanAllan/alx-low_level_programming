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
	int i;
	int j;

	i = 0;
	while (dest[i] != '\n')
	{
		i++;
	}
	j = 0;
	while (src[i] != '\n')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\n';
	return (dest);
}
