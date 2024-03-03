#ifndef DOG_H
#define DOG_H
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct dog - describes characterstics of a dog
 * @name: string of a name
 * @age: age of the dog
 * @owner: the name of the owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif