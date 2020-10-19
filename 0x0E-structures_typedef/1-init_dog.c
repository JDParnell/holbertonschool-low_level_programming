#include "dog.h"

/**
 *init_dog - initalizes a struct dog
 *@d: dog dataname
 *@name: dogs actual name
 *@age: how old the dog is
 *@owner: name of the owner
 *Return: void no return
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
