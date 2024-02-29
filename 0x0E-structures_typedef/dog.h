#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describes characterstics of a dog
 * @name: string of a name
 * @age: age of the dog
 * @owner: the name of the owner
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
