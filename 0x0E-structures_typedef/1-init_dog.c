#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: contains name of dog
 * @age: contains age of dog
 * @owner: contains dog's owner name
 *
 * returns: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name =  name;
	d->age = age;
	d->owner = owner;
}
