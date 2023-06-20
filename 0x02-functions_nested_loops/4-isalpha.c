/**
 * _isalpha - checks for alphabetic char
 *@c: character alphabetic
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
