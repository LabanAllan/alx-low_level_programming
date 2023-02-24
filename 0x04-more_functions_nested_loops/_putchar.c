#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * the character to print 
 * Description : 'using puts function'
 * Return: 1 on (Success)
 */
	int _putchar(char c)
{
	return (write(1, &c, 1));
}
