#include "3-calc.h"
/**
* op_add - addition operation
* @a: first operand
* @b: second operand
* Return: int
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - substract operation
* @a: first operand
* @b: second operand
* Return: int
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - multiplication operation
* @a: first operand
* @b: second operand
* Return: int
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - division operation
* @a: first operand
* @b: second operand
* Return: int
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - remainder operation
* @a: first operand
* @b: second operand
* Return: int
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
