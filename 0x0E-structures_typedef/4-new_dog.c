#include "dog.h"
#include <stdlib.h>
int find_len(char *s);
char *copy(char *c1, char *c2);

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
	dog_ptr->age = age;
	dog_ptr->name = malloc((find_len(name) + 1) * sizeof(char));
	if (dog_ptr->name == NULL)
	{
		free(dog_ptr);
		return (NULL);
	}
	else
	{
		copy(name, dog_ptr->name);
	}
	dog_ptr->owner = malloc((find_len(owner) + 1) * sizeof(char));
	if (dog_ptr->owner == NULL)
	{
		free(dog_ptr->name);
		free(dog_ptr);
		return (NULL);
	}
	else
	{
		copy(owner, dog_ptr->owner);
	}
	return (dog_ptr);
}

/**
 * find_len - find the str len
 * @s: str
 * Return: len
 */

int find_len(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * copy - copy string
 * @c1: str address
 * @c2: paste c1 here
 * Return: c2
 */

char *copy(char *c1, char *c2)
{
	int i, j;

	i = 0;
	j = find_len(c1);
	while (i < j)
	{
		c2[i] = c1[i];
		i++;
	}
	c2[i] = '\0';
	return (c2);
}
