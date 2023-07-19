#ifndef DEF_H
#define DEF_H myfunctions
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
#endif
