#include <stdlib.h>

int	how_words(char *str)
{
  int	i;
  int	words;

  words = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\0')))
	{
	  while (((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\0')))
	    i += 1;
	  words += 1;
	}
      if (str[i] != '\0')
	i += 1;
    }
  return (words);
}

int	fill_this_word(char **ret, char *str, int *i, int *mots)
{
  int	j;

  j = 0;
  while (((str[*i + j] != ' ') && (str[*i + j] != '\t') &&
	  (str[*i + j] != '\0')))
    j += 1;
  if ((ret[*mots] = malloc(sizeof(char) * (j + 1))) == NULL)
    return (-1);
  j = 0;
  while (((str[*i + j] != ' ') && (str[*i + j] != '\t') &&
	  (str[*i + j] != '\0')))
    {
      ret[*mots][j] = str[*i + j];
      j += 1;
    }
  ret[*mots][j] = '\0';
  *i += j;
  *mots += 1;
  return (0);
}

char	**my_str_to_wordtab(char *str)
{
  int	i;
  int	mots;
  char	**ret;

  mots = how_words(str);
  if ((ret = malloc(sizeof(char *) * (mots + 1))) == NULL)
    return (NULL);
  ret[mots] = NULL;
  mots = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (((str[i] != ' ') && (str[i] != '\t') && (str[i] != '\0')))
	{
	  fill_this_word(ret, str, &i, &mots);
	  if (str[i] != '\0')
	    i += 1;
	}
      else
	i += 1;
    }
  return (ret);
}
