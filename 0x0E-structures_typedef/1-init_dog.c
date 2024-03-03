#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: the initialized character
 * @name: name of the specific dog
 * @age: age of the dog
 * @owner: the owner name
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
