#include "dog.h"
#include <stdio.h>



void print_dog(struct dog *d)
{
	printf("name: %s\n", d->name);
	printf("name: %f\n", d->age);
	printf("name: %s\n", d->owner);
}
