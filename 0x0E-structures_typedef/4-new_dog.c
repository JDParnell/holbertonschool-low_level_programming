#include "dog.h"

/**
 *new_dog - mallocs a new dog
 *@name: the name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *Return: the new dog!
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *barney = malloc(sizeof(dog_t));

	if (barney == NULL)
		return (NULL);

	barney->name = malloc(sizeof(name));
	if (barney->name == NULL)
	{
		free(barney);
		return (NULL);
	}

	barney->owner = malloc(sizeof(owner));
	if (barney->owner == NULL)
	{
		free(barney->name);
		free(barney);
		return (NULL);
	}

	barney->name = name;
	barney->age = age;
	barney->owner = owner;
	return (barney);
}
