#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - structure initialser
 * @d: structure pointer
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
		if (d == NULL)
			return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
