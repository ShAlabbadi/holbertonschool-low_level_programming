#include <stdlib.h>
#include "dog.h"
/**
* init_dog - a function that initialize a variable of type struct dog.
* @d: a pointer to struct dog to use in the initialize.
* @name: name of the dog.
* @age: age of the dog.
* @owner: owner of the dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;

}
