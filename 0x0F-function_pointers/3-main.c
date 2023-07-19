#include "3-calc.h"
/**
* main - entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: int
*/
int main(int argc, char *argv[])
{
char *operator;
int num1, num2;
int res;
int (*ope_func)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
num1 =  atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];
ope_func = get_op_func(operator);
if (ope_func == NULL)
{
printf("Error\n");
exit(99);
}
res = (*ope_func)(num1, num2);
printf("%d\n", res);
return (0);
}
