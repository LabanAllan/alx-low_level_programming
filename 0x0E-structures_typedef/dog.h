#include <stdio.h>
#include <stdlib.h>
#ifndef DOG_H
#define DOG_H

/**
	 * struct dog - a dog's basic info
	 * @name: First member
	 * @age: Second member
	 * @owner: Third member
*/
struct dog
{
	char *name;
	float  age;
	char *owner;
}
int main()
{
	printf("this dog's name %s"\n: dog ->name);
		printf("this dog's age %d"\n: dog ->age);
		printf("this dog's owner %d"\n: dog ->owner);


		return (0);
}

#endif
