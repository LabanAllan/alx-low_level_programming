#include<stdio.h>

/**
 * main - Entry point
 * Description : 'using puts function'
 * Return: Always (0)(Success)
 */
	int main(void)
{
		char a;
		int b;
		long int c;
		long long int d;
		float f;
	printf("the size of char is :%zu byte(s)\n", sizeof( char));
	printf("the size of int is :%zu byte(s)\n", sizeof( int));
	printf("the size of long int is :%zu byte(s)\n", sizeof(long int));
	printf("the size of long long int is :%zu byte(s)\n", sizeof(long long int));
	printf("the size of float is :%zu byte(s)\n", sizeof( float));
return (0);
}
