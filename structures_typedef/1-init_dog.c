#include <stdio.h>
#include "dog.h"

/**
 *init_dog -  a function that initialize a variable of type struct dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 *@d: d
 *Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

		d->name = name;
		d->age = age;
		d->owner = owner;

}
