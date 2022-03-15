#include "dog.h"
#include <stdlib.h>

/**
* init_dog - Initializes a dog structure
* @d: Pointer to a element type dog
* @name: The name of the dog
* @age: The age of the dog
* @owner: The owner of the dog
* Return: Dog Info
**/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
;
else
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
