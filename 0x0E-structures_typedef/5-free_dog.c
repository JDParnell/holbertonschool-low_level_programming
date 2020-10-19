#include "dog.h"

/**
 *free_dog - frees a dog
 *@d: the dog to be freed
 *Return: void no return
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
