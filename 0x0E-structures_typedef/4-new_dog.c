#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - New data
 * @name: name of new dog
 * @age: age of new dog
 * @owner: Owner of new dog
 * Return: 0 or d
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int n, o;
dog_t *d;

d = malloc(sizeof(dog_t));
if (d == NULL)
	return (NULL);

for (n = 0; name[n]; n++)
	;
for (o = 0; owner[o]; o++)
	;
d->name = malloc((n + 1) * sizeof(char));
if (d->name == NULL)
{
	free(d);
	return (NULL);
}
d->owner = malloc((o + 1) * sizeof(char));
if (d->owner == NULL)
{
	free(d->name);
	free(d);
	return (NULL);
}
for (n = 0; name[n]; n++)
{
d->name[n] = name[n];
}
d->name[n] = 0;
for (o = 0; owner[o]; o++)
{
	d->owner[o] = owner[o];
}
d->owner[o] = 0;
d->age = age;
return (d);
}
