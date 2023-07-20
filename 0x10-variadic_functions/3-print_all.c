#include "variadic_functions.h"
#include <stdio.h>
/**
* print_str - print string to console
*@list: list of arguments
* Return: void
*/
void print_str(va_list list)
{
char *res;
res = va_arg(list, char*);
if (res == NULL)
printf("(nil)");
printf("%s", res);
}
/**
* print_flo - print float to console
*@list: list of arguments
* Return: void
*/
void print_flo(va_list list)
{
printf("%f", va_arg(list, double));
}
/**
* print_int - print integer to console
*@list: list of arguments
* Return: void
*/
void print_int(va_list list)
{
printf("%i", va_arg(list, int));
}
/**
* print_char - print char to console
*@list: list of arguments
* Return: void
*/
void print_char(va_list list)
{
printf("%c", va_arg(list, int));
}
/**
* print_all - function principal
* @format: string
* Return: void
*/
void print_all(const char * const format, ...)
{int i = 0, j = 0;
char *sep = "";
va_list ptr;
form myform[] = {{"c", print_char}, {"i", print_int},
{"f", print_flo}, {"s", print_str}};
va_start(ptr, format);
while (format != NULL && format[i] != '\0')
{
while (j  <  4)
{
if (format[i] == *(myform[j].symbol))
{
printf("%s", sep);
myform[j].f(ptr);
sep = ", ";
break;
} /*if*/
j++;
} /*while2*/
j = 0;
i++;
} /* while1*/
printf("\n");
/*clean up*/
va_end(ptr);
}
