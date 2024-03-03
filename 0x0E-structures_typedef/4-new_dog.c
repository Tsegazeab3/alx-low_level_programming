#include "dog.h"
/**
 * new_dog - creates identity for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner of the dog
 * Return: a pointer to the new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	dog_t *dog = &new_dog;
	int len1 = strlen(name + 1);
	int len2 = strlen(owner + 1);

	new_dog.name = malloc(len1);
	if (new_dog.name == NULL)
		return (NULL);
	new_dog.owner = malloc(len2);
	if (new_dog.name == NULL)
		return (NULL);
	strcpy(new_dog.name, name);
	new_dog.age = age;
	strcpy(new_dog.owner, owner);
	return (dog);
}
