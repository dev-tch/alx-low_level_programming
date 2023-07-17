#include "dog.h"
#include <stddef.h>
/**
* init_dog - initilise the state of object dog
* @d: struct or let's say  class dog
*@name:  name of dog
*@age: age of dog
*@owner: the name of person who own the dog
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*if reference is null we should return*/
if (d == NULL)
return;
/*
*==> d is refefernce to object dog
*we can  access attributes as follows:
*d->attribute or (*d).attribute
*/
d->name = name;
d->age = age;
d->owner = owner;
}
