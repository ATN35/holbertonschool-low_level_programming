#include <stdio.h>
#include "dog.h"

/**
* new_dog - a function that creates a new dog
* @name: name of the dog
* @age: age of the dog
* @owner: owner of the dog
* Return: NULL and new_dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *str_name, *str_owner;
	int len_name = 0, len_owner = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[len_name])
		len_name++;
	while (owner[len_owner])
		len_owner++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	str_name = malloc(len_name + 1);
	if (str_name == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		str_name[i] = name[i];
	str_name[i] = '\0';

	str_owner = malloc(len_owner + 1);
	if (str_owner == NULL)
		return (NULL);

	for (i = 0; owner[i]; i++)
		str_owner[i] = owner[i];
	str_owner[i] = '\0';

	new_dog->name = str_name;
	new_dog->age = age;
	new_dog->owner = str_owner;
	return (new_dog);
}
