#include <stddef.h>
#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Contains dog  informations
 * @name: dog's name
 * @age: dog's  age
 * @owner: dog's owner
 *
 * Description: Holds all dog's data
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /* DOG_H */
