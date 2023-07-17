#include <stdio.h>
#include "dog.h"
#include <stddef.h>
/**
*format_dog_attribute - process the cas null pointer attributes
* @str: attribute
* Return: pointer to formatted string
*/
char *format_dog_attribute(char *str)
{
char *res = str;
if (str == NULL || *str == '\0')
res = "(nil)";
return (res);
}
/**
*print_dog - print the state of object dog
* @d: reference to dog object
* Return: void
*/
void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
printf("Name: %s\n", format_dog_attribute(d->name));
printf("Age: %f\n", d->age);
printf("Owner: %s\n", format_dog_attribute(d->owner));
}
