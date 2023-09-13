#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Function prototype for init_dog */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/* Define a new type dog_t */
typedef struct dog dog_t;

#endif /* DOG_H */
