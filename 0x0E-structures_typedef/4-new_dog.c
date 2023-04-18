#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * dog_t - function
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(strlen(name) + 1);
	new_owner = malloc(strlen(owner) + 1);
	if (new_name == NULL || new_owner == NULL)
	{
		free(new_name);
		free(new_owner);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
