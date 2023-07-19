#include <stddef.h>
/**
* print_name - call function pointer f with param name
* @name: string
* @f: function pointer
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
(*f)(name);
}
