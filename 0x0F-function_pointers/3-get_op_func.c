#include "3-calc.h"
#include <stddef.h>
/**
* get_op_func - return the function based on operand
* @s: string
* Return: function pointer
*/
int (*get_op_func(char *s))(int, int)
{
int i = 5;
op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul}, {"/", op_div},
{"%", op_mod}, {NULL, NULL}};
while (i >= 0)
{
if ((s == NULL && i == 5) || (i < 5 && (strcmp(s, ops[i].op) == 0)))
return (ops[i].f);
i--;
}
return (NULL);
}
