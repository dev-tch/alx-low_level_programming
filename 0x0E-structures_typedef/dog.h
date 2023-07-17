#ifndef H_DEF
#define H_DEF DOG_H
/**
* struct dog - new class dog
* @name: attribute
* @age : attribute
* @owner:attribute
*  Description: hold the state of object dog
*/
struct dog
{
char *name;
float age;
char *owner;
};
#endif
#ifndef H_DEF_FUNC
#define H_DEF_FUNC myfunctions
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
