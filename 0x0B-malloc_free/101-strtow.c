#include <stddef.h>
#include <stdlib.h>
/**
*get_nb_words - number of words
*@str: string
* Return: int
*/
int get_nb_words(char *str)
{
int nb = 0;
int prev_is_space = 1;
while (*str)
{
if (*str == ' ' && !prev_is_space)
{
nb++;
prev_is_space = 1;
}
else if (*str != ' ')
{
prev_is_space = 0;
}
str++;
}
if (*(str - 1) != ' ')
nb++;
return (nb);
}
/**
* free_tab - clean ressources
* @tab: pointer to words
* @len: int
* Return: void
*/
void free_tab(char  **tab, int len)
{
int j = 0;
for (j = 0 ; j < len ; j++)
{
free(tab[j]);
}
free(tab);
}

/**
* strtow - split strings
* @str: string
* Return: pointer to arrays
*/
char **strtow(char *str)
{
char **tab = NULL;
char *bkp = str, *ptr = str, *end;
int word_idx = 0, len_wrd  = 0, i = 0, nb = 0;
if (str == NULL ||  *str == '\0')
return (NULL);
nb = get_nb_words(bkp);
if (nb == 0)
return (NULL);
tab = (char **) malloc((nb + 1) * sizeof(char *));
if (tab == NULL)
return (NULL);
while (*ptr)
{
if (*ptr == ' ')
{
ptr++;
continue;
}
end = ptr;
while (*end != ' ' && *end != '\0')
end++;
/*memory allocation for current word*/
len_wrd = end - ptr;
tab[word_idx] = (char *)  malloc((len_wrd + 1) * sizeof(char));
if (tab[word_idx] == NULL)
{
/* Memory allocation failed, free previously allocated memory*/
free_tab(tab, word_idx);
return (NULL);
}
for (i = 0 ; i < len_wrd ; i++)
{
tab[word_idx][i] = ptr[i];
}
tab[word_idx][len_wrd] = '\0';
word_idx++;
ptr = end;
} /*top while loop*/
tab[word_idx] = NULL;
return (tab);
}
