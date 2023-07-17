#ifndef H_DEF
#define H_DEF DOG_H
/**
* struct dog - new class dog
* @name: attribute
* @age : attribute
* @owner:attribute
*  Description: hold the state of object dog
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
#endif
#ifndef H_DEF_FUNC
#define H_DEF_FUNC myfunctions
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
