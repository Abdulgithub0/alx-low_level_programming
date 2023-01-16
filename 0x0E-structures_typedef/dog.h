#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure declaration and definition for dog data type
 * @name: data member for describing the dog's name
 * @age: data member for describing the age of the dog
 * @owner: data member for describing the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif
