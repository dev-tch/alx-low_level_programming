#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
* get_len - calculates the lenght of string
* @str: string
* Return: int
*/
int get_len(char *str)
{
if (str == NULL || *str == '\0')
return (0);
return (1 + get_len(str + 1));
}
/**
 * _strcpy - copies the string with \0 to the buffer
 * @dest: pointer to dest
 * @src: pointer to string
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
/**
* new_dog - create object dog
* @name: initilize attribute name
* @age: initialize attribute age
* @owner: initialize attribute owner
* Return: reference to new created object dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{int len = 0;
/*pointer to new allocated memory object*/
dog_t *ptr = malloc(sizeof(dog_t));
if (ptr == NULL)
return (NULL);
len = get_len(name);
ptr->name = (char *) malloc(sizeof(char) * (len + 1));
if (ptr->name == NULL)
{
free(ptr);
return (NULL);
}
ptr->name = _strcpy(ptr->name, name);
len = get_len(owner);
ptr->owner = (char *) malloc(sizeof(char) * (len + 1));
if (ptr->owner == NULL)
{
free(ptr->name);
free(ptr);
return (NULL);
}
ptr->owner = _strcpy(ptr->owner, owner);
ptr->age = age;
return (ptr);
}
