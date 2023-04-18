#include <stdlib.h>
#ifndef DOG_H

#define DOG_H

void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * struct dog - Struct of the function
 * @name: Name of the dog
 * @age: of the dog
 * @owner: Owner of the dog
 */
struct dog
{
char *name;
	float age;
char *owner;
};
#endif
