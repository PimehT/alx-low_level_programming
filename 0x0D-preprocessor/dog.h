#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's attribute
 * @name: the first attribute
 * @age: the second attribute
 * @owner: the third attribute
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
