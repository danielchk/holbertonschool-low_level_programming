#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - initialize struct
 * @d: pointer
 * @name: Name of dog
 * @age: age of dog
 * @owner: Owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	if (d == NULL)
		return;

	d->name = name;
	d->owner = owner;
	d->age = age;
}
