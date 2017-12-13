#include <stdlib.h>
#include "fourmiz.h"
#include "get_next_line.h"
#include "parser.h"
#include "tools_ints.h"
#include "tools_strings.h"

static char	**init_input(int *line, char *link)
{
  char		**input;

  if (!(input = realloc_input(NULL, 30 + 1)))
    return (NULL);
  *line = 0;
  *link = 0;
  return (input);
}

static int	check_nb_ants(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    {
      if (!(str[i] >= '0' && str[i] <= '9'))
	return (1);
      i = i + 1;
    }
  return (i ? 0 : 1);
}

char		**get_ants(int *line, int *nbr_ants, char *link)
{
  char		**input;

  if (!(input = init_input(line, link)))
    return (NULL);
  while ((input[*line] = get_next_line(0)) && input[*line][0])
    {
      if (!((*line + 4) % 10) &&
	  !(input = realloc_input(input, ((*line + 4) / 10 + 2) * (10 + 10))))
      	return (NULL);
      if (!check_nb_ants(input[*line]) &&
	  (*nbr_ants = my_getnbr(input[*line])) > 0)
	return (input);
      else if (!(input[*line][0] == '#' && input[*line][1] != '#'))
	return (NULL);
      *line += 1;
    }
  return (input);
}
