#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description : 'betty style doc for function main goes there'
 * Return: Always (0)(Success)
 */
int main(void)
{
	int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i negative\n", n);
	else
		printf("%i is ziro\n", n);

	return (0);

}