#include <stdlib.h>
#include <unistd.h>
#include "tools.h"

void		free_how_lines_char_op(char **wordtab, unsigned int mots)
{
  unsigned int	i;

  i = 0;
  while (i < mots)
    {
      free(wordtab[i]);
      i += 1;
    }
  free(wordtab);
}

int		how_words_op(char *str, char op)
{
  unsigned int	i;
  unsigned int	words;

  words = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] != op)
	{
	  while (str[i] != '\0' && str[i] != op)
	    i += 1;
	  words += 1;
	}
      if (str[i] != '\0')
	i += 1;
    }
  return (words);
}

void	fill_this_word_op(char **wordtab, t_uint  idx[2], char *str, char op)
{
  int	j;

  j = 0;
  while (str[(idx[0]) + j] != '\0' && str[(idx[0]) + j] != op)
    j += 1;
  if ((wordtab[(idx[1])] = malloc(sizeof(char) * (j + 1))) == NULL)
    {
      write(2, "Malloc of one element of wordtab has failed\n", 44);
      free_how_lines_char_op(wordtab, idx[1]);
      free(wordtab);
    }
  j = 0;
  while (str[(idx[0]) + j] != '\0' && str[(idx[0]) + j] != op)
    {
      wordtab[(idx[1])][j] = str[(idx[0]) + j];
      j += 1;
    }
  wordtab[(idx[1])][j] = '\0';
  (idx[0]) += j;
  (idx[1]) += 1;
}

char		**my_str_to_wordtab_op(char *str, char op)
{
  char		**wordtab;
  unsigned int	idx[2];

  if ((wordtab = malloc(sizeof(char *) * (how_words_op(str, op) + 1))) == NULL)
    write(2, "Malloc of wordtab has failed\n", 29);
  idx[1] = 0;
  idx[0] = 0;
  while (str[idx[0]] != '\0')
    {
      if (str[idx[0]] != op)
	fill_this_word_op(wordtab, idx, str, op);
      {
	if (str[idx[0]] != '\0')
	  idx[0] += 1;
      }
    }
  wordtab[how_words_op(str, op)] = NULL;
  return (wordtab);
}
