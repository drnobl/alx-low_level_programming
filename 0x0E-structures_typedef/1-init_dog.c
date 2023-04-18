#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: parameter
 * @name: Name parameter
 * @age: Age of the dog
 * @owner : Owner of the dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d.age = age;
	d->owner = owner;
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d.age, d->owner);
}
