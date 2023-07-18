#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * new_dog - store copy of name and owner
 * @name: pointer variable
 * @age: float
 * @owner: pointer variable
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	unsigned int x, y, z;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (x = 0; name[x]; x++)
		;
	x++;
	dog->name = malloc(sizeof(char) * x);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (x = 0; name[x]; x++)
		dog->name[x] = name[x];
	dog->age = age;
	for (y = 0; owner[y]; y++)
		;
	y++;
	dog->owner = malloc(sizeof(char) * y);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (z = 0; z < y; y++)
	{
		dog->owner[z] = owner[z];
	}
	return (dog);
}
