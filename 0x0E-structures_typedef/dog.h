#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure for dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: A structure called dog that contains some info about a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

