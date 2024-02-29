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
#endif
