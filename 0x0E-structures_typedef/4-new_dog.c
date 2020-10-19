#include "dog.h"

/**
 *_strcpy - copies a string
 *@dest: where the sting needs to be copied
 *@src: the string to be copied
 *Return: the pointer to the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}

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

	barney->name = _strcpy(barney->name, name);
	barney->age = age;
	barney->owner = _strcpy(barney->owner, owner);
	return (barney);
}
