#include <stdio.h>
#include <stdarg.h>
/**
* print_strings - print arguments of strings using separator
* @separator: string
* @n: int
  * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
int i;
char *arg;
/*decalre pointer to list args*/
va_list ptr;
if ((int)n <= 0)
{
printf("\n");
return;
}
/*point to the first argument of the list */
va_start(ptr, n);
for (i = 0; i < (int)n; i++)
{
/*acces to the first arg of type string  and next */
arg = va_arg(ptr, char *);
printf("%s", (arg == NULL) ? "(nil)" : arg);
if (i != (int) (n - 1) && separator != NULL)
printf("%s", separator);
if (i == (int)(n - 1))
printf("\n");
}
/*clean up ptr*/
va_end(ptr);
}
