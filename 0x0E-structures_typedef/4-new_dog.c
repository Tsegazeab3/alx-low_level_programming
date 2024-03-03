#include "dog.h"
/**
 * new_dog - creates identity for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of the dog
*/
dog_t *new_dog(char *name, float age, char *owner);
{
	if (new_dog == NULL)
		new_dog = malloc(sizeof(dog_t));
	strcpy(new_dog -> name, name);
	new_dog -> age = age;
	strcpy(new -> owner, owner);
	return (new_dog);
}