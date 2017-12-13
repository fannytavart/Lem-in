#include <stdlib.h>
#include "tools.h"

int	how_many_words_n(char *str, int *pos)
{
  int	i;
  int	nbr_words;

  i = pos[0];
  nbr_words = 0;
  while (i < pos[1])
    {
      if (str[i] != ' ' && str[i] != '\t')
	{
	  ++nbr_words;
	  while (i < pos[1] && str[i] != ' ' && str[i] != '\t')
	    ++i;
	}
      while (i < pos[1] && (str[i] == ' ' || str[i] == '\t'))
	++i;
    }
  return (nbr_words);
}

void	fill_words_n(char **tab, char *str, int *pos)
{
  int	idx[3];

  idx[0] = pos[0];
  idx[2] = 0;
  while (idx[0] < pos[1])
    {
      if (str[idx[0]] != ' ' && str[idx[0]] != '\t')
	{
	  idx[1] = 0;
	  while (idx[0] < pos[1] && str[idx[0]] != ' ' && str[idx[0]] != '\t')
	    {
	      idx[0] += 1;
	      idx[1] += 1;
	    }
	  if ((tab[(idx[2]++)] = my_strndup_pos(str, NULL, (idx[0] - idx[1]),
						idx[0])) == NULL)
	    return ;
	}
      while (idx[0] < pos[1] && (str[idx[0]] == ' ' || str[idx[0]] == '\t'))
	idx[0] += 1;
    }
  tab[idx[2]] = NULL;
}

char	**my_str_n_to_wordtab(char *str, int *pos)
{
  char	**tab;

  if ((tab = malloc(sizeof(char *) * (how_many_words_n(str, pos) + 1))) == NULL)
    return (NULL);
  fill_words_n(tab, str, pos);
  return (tab);
}
