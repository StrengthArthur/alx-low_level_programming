#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - This is a data type
 * @name: This is the name of the dog
 * @age: This is the age of the dog
 * @owner: This is the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
