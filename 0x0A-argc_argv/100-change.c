#include <stdlib.h>
#include <stdio.h>
/**
* main - the minimum coins to make change
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 or 1
*/
int main(int argc, char *argv[])
{
int nb, i;
int sum = 0;
int rem, div;
int coins[5] = {25, 10, 5, 2, 1};
/*my coins 25 10 5 2 1 */
if (argc == 2)
nb = atoi(argv[1]);
if (argc != 2 || (argc == 2 && argv[1][0] != '0' &&  nb == 0))
{
printf("Error\n");
return (1);
}
if (nb < 0)
{
printf("0\n");
return (0);
}
for (i = 0 ; i < 5 ; i++)
{
rem = nb % coins[i];
div = nb / coins[i];
sum = sum + div;
nb  = rem;
if (rem == 0)
break;
}
printf("%d\n", sum);
return (0);
}
