#include <stdlib.h>
#include "tools_strings.h"
#include "fourmiz.h"
#include "parser.h"

static char	*stock_src(char *input)
{
  int		i;
  char		*src;

  i = 0;
  while (input[i] && input[i] != '-')
    i = i + 1;
  if ((src = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  i = 0;
  while (input[i] && input[i] != '-')
    {
      src[i] = input[i];
      i = i + 1;
    }
  src[i] = '\0';
  return (src);
}

static char	*stock_dest(char *input)
{
  int		i;
  int		j;
  char		*dest;

  i = 0;
  j = 0;
  while (input[i] && input[i] != '-')
    ++i;
  if (input[i])
    ++i;
  while (input[i])
    {
      ++i;
      ++j;
    }
  if ((dest = malloc(sizeof(char) * (j + 1))) == NULL)
    return (NULL);
  i -= j;
  j = 0;
  while (input[i] != '\0')
    dest[j++] = input[i++];
  dest[j] = '\0';
  return (dest);
}

static int	check_name(t_room *rooms, char *name)
{
  while (rooms)
    {
      if (!my_cmp(name, rooms->name))
	return (0);
      rooms = rooms->next;
    }
  return (1);
}

int		stock_link_info(t_room *rooms, t_link **links, char *input)
{
  char		*src;
  char		*dest;

  return ((!(src = stock_src(input)) || !(dest = stock_dest(input)) ||
	   check_name(rooms, src) || check_name(rooms, dest) ||
	   !add_link(links, src, dest, &rooms)) ? -1 : 0);
}
