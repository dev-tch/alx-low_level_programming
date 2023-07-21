#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#include <stdarg.h>
/**
 * struct _format - Typedef struct
 * @symbol: Format
 * @f: The function associated
 **/
typedef struct _format
{
char *symbol;
void (*f)(va_list);
} form;
#endif

