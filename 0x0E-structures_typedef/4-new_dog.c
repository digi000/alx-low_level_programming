#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - sd
 * @name: jwek
 * @age: hj
 * @owner: jdf
 * Return: fd
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *myd;

	myd = malloc(sizeof(dog_t));
	if (myd == NULL)
		return (NULL);
	myd->name = malloc(strlen(name) + 1);
	myd->owner = malloc(strlen(owner) + 1);
	strcpy(myd->name, name);
	strcpy(myd->owner, owner);
	myd->age = age;
	return (myd);
}
