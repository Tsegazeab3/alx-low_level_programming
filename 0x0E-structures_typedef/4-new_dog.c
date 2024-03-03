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
		dog_t *dog;
		int len1 = strlen(name);
		int len2 = strlen(owner);

		dog = malloc(sizeof(dog_t));
		if (!dog)
			return (NULL);
		dog->name = malloc(len1 + 1);
		if (dog->name == NULL)
		{
			free(dog);
			return (NULL);
		}
		dog->owner = malloc(len2 + 1);
		if (dog->name == NULL)
		{
			free(dog->name);
			free(dog);
			return (NULL);
		}
		strcpy(dog->name, name);
		dog->age = age;
		strcpy(dog->owner, owner);
		return (dog);
}
