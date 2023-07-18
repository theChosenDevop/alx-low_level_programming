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
	for (y = 0; y < x ; y++)
		dog->name[y] = name[y];
	dog->age = age;
	for (z = 0; owner[z]; z++)
		;
	z++;
	dog->owner = malloc(sizeof(char) * z);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (y = 0; y < z; y++)
	{
		dog->owner[y] = owner[y];
	}
	return (dog);
}
