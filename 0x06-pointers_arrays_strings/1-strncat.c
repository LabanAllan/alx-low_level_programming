#include "main.h"
/**
 * _strncpy -copy a string
 * @dest: input value
 * @src: input value
 * @n:input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
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

