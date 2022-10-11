#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Contains dog  informations
 *
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
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_tii;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest, char *src);
void free_dog(dog_t *d);
#endif /* _DOG_H_ */
