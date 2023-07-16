#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
* get_len - get the length of string
* @str: string
* Return: int
*/
int get_len(const char *str)
{
if (*str == '\0')
return (0);
return (1 + get_len(str + 1));
}
/**
* exit_program - print error and return error code 98
* Return : void
*/
void exit_program(void)
{
int i = 0;
char *err = "Error\n";
while (i < 5)
{
_putchar(err[i]);
i++;
}
_putchar('\n');
exit(98);
}
/**
* init_with_zeros - initilize string with zeros
* @result: string
* @len:lenght of string
* Return: void
*/
void init_with_zeros(char *result, int len)
{
int i = 0;
for (i = 0 ; i < len ; i++)
{
result[i] = '0';
}
}
/**
* multiply - multiply two numbers
* @num1: number1
* @num2: number2
* Return: pointer to result multiplication
*/
char *multiply(const char *num1, const char *num2)
{
int i = 0, temp = 0, carry = 0, j = 0;
int len1 = get_len(num1);
int len2 = get_len(num2);
int len = len1 + len2;
/*Allocate memory for the result string*/
char *result = (char *)malloc((len + 1) * sizeof(char));
if (result == NULL)
{
exit_program();
}
/*Initialize the result string with '0'*/
init_with_zeros(result, len);
result[len] = '\0';
/*Perform the multiplication*/
for (i = len1 - 1 ; i >= 0 ; i--)
{
carry = 0;
for (j = len2 - 1 ; j >= 0 ; j--)
{
temp = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
result[i + j + 1] = temp % 10 + '0';
carry = temp / 10;
}
result[i] += carry;
}
/*Remove leading zeros*/
i = 0;
while (result[i] == '0' && result[i + 1] != '\0')
i++;
/*Shift the string to remove leading zeros*/
if (i > 0)
{
j = 0;
while (result[i] != '\0')
{
result[j++] = result[i++];
}
result[j] = '\0';
}
return (result);
}
/**
* is_digit - test string is numeric
* @str: string
* Return: int
*/
int is_digit(const char *str)
{
while (*str)
{
if (*str < 48 || *str > 57)
return (0);
str++;
}
return (1);
}
/**
* print - display string in console
* @res   : string
* Return: void
*/
void print(char *res)
{
while (*res)
{
_putchar(*res);
res++;
}
_putchar('\n');
}
/**
* main - multiply two numbers
* @argc: number of arguments
* @argv: array of arguments
* Return: result multiplcation
*/
int main(int argc, char *argv[])
{
char *result;
int test_dig = 1, test_dig2 = 1;
if (argc != 3)
exit_program();
test_dig  = is_digit(argv[1]);
test_dig2 = is_digit(argv[2]);
if (test_dig == 0 || test_dig2 == 0)
exit_program();
result = multiply(argv[1], argv[2]);
print(result);
free(result);
return (0);
}
