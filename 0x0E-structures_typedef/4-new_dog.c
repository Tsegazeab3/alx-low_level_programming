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
	if (name && owner)
	{
		dog_t *dog = malloc(sizeof(dog_t));
		int len1 = strlen(name);
		int len2 = strlen(owner);

		dog->name = malloc(len1 + 1);
		if (dog->name == NULL + 1)
			return (NULL);
		dog->owner = malloc(len2);
		if (dog->name == NULL)
			return (NULL);
		strcpy(dog->name, name);
			dog->age = age;
		strcpy(dog->owner, owner);
		return (dog);
	}
	return (NULL);
}
