#include "dog.h"

/**
 *_strdup - creates a copy of a string using malloc
 *@str: the string to be copied
 *Return: the pointer to the copy of the string
 */

char *_strdup(char *str)
{
	char *cpy;
	int i, k;

	if (str == NULL)
		return (NULL);

	for (k = 0; str[k] != '\0'; k++)
	{}

	cpy = malloc((k + 1) * sizeof(char));

	if (cpy == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		cpy[i] = str[i];
	}
	cpy[i] = str[i];

	return (cpy);

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
	dog_t *barney;

	barney = malloc(sizeof(dog_t));

	if (barney == NULL)
		return (NULL);

	barney->name = _strdup(name);
	if (barney->name == NULL)
	{
		free(barney);
		return (NULL);
	}

	barney->owner = _strdup(owner);
	if(barney->owner == NULL)
	{
		free(barney->name);
		free(barney);
		return (NULL);
	}

	barney->age = age;

	return (barney);
}
