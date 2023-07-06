/**
 * get_len_str - return len of string
 * @str: string
 * Return: int
 */
int get_len_str(char *str)
{
char *wrk_str = str;
if (*wrk_str == '\0')
return (0);
return (1 + get_len_str(wrk_str + 1));
}
/**
 * recursive_pal - verify of two chars can form a plindrome string
 * @str: string
 * @n: int
 * @e: int
 *Return: int
 */

int recursive_pal(char *str, int n, int e)
{
if (n == e)
return (1);
if (str[n] != str[e])
return (0);
if (n < (e + 1))
return (recursive_pal(str, n + 1, e - 1));
return (1);
}
/**
 * is_palindrome - test if string is plindrome
 * @s: string to test
 * Return: int
 */
int is_palindrome(char *s)
{
/*we need function to calculate len of str*/
int n = get_len_str(s);
if (n == 1 || n == 0)
return (1);
/*other helper function to calculate plindrome */
return (recursive_pal(s, 0, n - 1));
}
