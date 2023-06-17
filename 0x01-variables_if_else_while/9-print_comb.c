#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 48;
int j = 0;
int code;
while (i < 57)
{
putchar(i);
putchar(',');
putchar(32);
i++;

}
while (j < 2)
{
if (j == 0)
/*ascii number 9*/
code = 57;
else
/*ascii new line */
code = 10;
putchar(code);
j++;
}
return (0);
}

