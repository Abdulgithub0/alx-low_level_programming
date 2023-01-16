#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog.
 * @name: data member storing the name of the dog
 * @age: storing age of the dog
 * @owner: owner's name
 * Return: the variable with data type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_ptr;

	dog_ptr = malloc(sizeof(dog_ptr));
	if (dog_ptr == NULL)
		return (NULL);
	dog_ptr->name = name;
	dog_ptr->age = age;
	dog_ptr->owner = owner;
	return (dog_ptr);
}
