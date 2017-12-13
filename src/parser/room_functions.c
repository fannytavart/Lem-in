#include <stdlib.h>
#include "tools.h"
#include "tools_ints.h"
#include "tools_strings.h"
#include "fourmiz.h"
#include "parser.h"

static char	*stock_name(char *input)
{
  char		*name;
  int		i;

  i = 0;
  while (input[i] && input[i] != ' ')
    ++i;
  if ((name = malloc(sizeof(char) * (i + 1))) == NULL)
    return (NULL);
  name = my_strncpy(name, input, i);
  return (name);
}

static int	stock_x(char *input)
{
  int		i;
  int		j;
  int		x;
  char		*tmpx;

  i = 0;
  j = 0;
  while (input[i] && input[i] != ' ')
    i = i + 1;
  i = i + 1;
  while (input[i] && input[i] != ' ')
    {
      j = j + 1;
      i = i + 1;
    }
  if ((tmpx = malloc(sizeof(char) * (j + 1))) == NULL)
    return (-1);
  i = i - j;
  j = 0;
  while (input[i] && input[i] != ' ')
    tmpx[j++] = input[i++];
  tmpx[j] = '\0';
  x = my_getnbr(tmpx);
  return (x);
}

static int	stock_y(char *input)
{
  int		i;
  int		j;
  int		y;
  char		*tmpy;

  init_i_and_j(&i, &j);
  while (input[i] && input[i] != ' ')
    ++i;
  ++i;
  while (input[i] && input[i] != ' ')
    ++i;
  while (input[i])
    {
      j = j + 1;
      i = i + 1;
    }
  if ((tmpy = malloc(sizeof(char) * (j + 1))) == NULL)
    return (-1);
  i = i - j + 1;
  j = 0;
  while (input[i])
    tmpy[j++] = input[i++];
  tmpy[j] = '\0';
  y = my_getnbr(tmpy);
  return (y);
}

static int	check_room(t_room *rooms,
			   unsigned int x,
			   unsigned int y,
			   char *name)
{
  while (rooms)
    {
      if ((rooms->x == x && rooms->y == y) ||
	  !my_cmp(rooms->name, name))
	return (1);
      rooms = rooms->next;
    }
  return (0);
}

int		stock_room_info(t_room **rooms, char *input)
{
  char		*name;
  int		x;
  int		y;

  return ((!(name = stock_name(input)) || (x = stock_x(input)) == -1 ||
	   (y = stock_y(input)) == -1 ||
	   check_room(*rooms, x, y, name) ||
	   !add_room(rooms, name, x, y)) ? -1 : 0);
}
