/**
 * rev_string - reverse string
 *@s: pointer to char
 * Return: void
 */

void rev_string(char *s)
{
char *first_char = s;
char *end_char = s;
while (*end_char)
{
end_char++;
}
end_char--;

/*swap characters*/
while (first_char < end_char)
{
char tmp = *first_char;
*first_char = *end_char;
*end_char = tmp;
first_char++;
end_char--;
}
}
