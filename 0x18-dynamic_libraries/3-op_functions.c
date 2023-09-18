#include "common.h"
/**
*  add - addition operation
* @a: first operand
* @b: second operand
* Return: int
*/
int  add(int a, int b)
{
return (a + b);
}
/**
* sub - substract operation
* @a: first operand
* @b: second operand
* Return: int
*/
int sub(int a, int b)
{
return (a - b);
}
/**
* mul - multiplication operation
* @a: first operand
* @b: second operand
* Return: int
*/
int mul(int a, int b)
{
return (a * b);
}
/**
* div - division operation
* @a: first operand
* @b: second operand
* Return: int
*/
int div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
my_exit(100);
}
return (a / b);
}
/**
* mod - remainder operation
* @a: first operand
* @b: second operand
* Return: int
*/
int mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
my_exit(100);
}
return (a % b);
}
