#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's attribute
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 * Description: This struct defines a dog's attribute
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
