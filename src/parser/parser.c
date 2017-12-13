#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"
#include "fourmiz.h"
#include "parser.h"
#include "tools.h"
#include "tools_returns.h"
#include "tools_strings.h"

static int	define_start_end(t_room **rooms,
				 t_room **borders,
				 char **input,
				 int *line)
{
  int		cell;

  if (!my_cmp("##start", input[*line]))
    cell = 0;
  else if (!my_cmp("##end", input[*line]))
    cell = 1;
  else
    return (1);
  *line += 1;
  return ((!(input[*line] = get_next_line(0)) ||
	   !(input[*line] = epurstr(input[*line])) ||
	   !format_rooms(input[*line]) ||
	   stock_room_info(rooms, input[*line]) ||
	   add_start_end(*rooms, borders, cell) ? -1 : 0));
}

char		**realloc_input(char **old, int size)
{
  char		**new;
  int		idx;

  if (!(new = malloc(sizeof(char *) * size)))
    return (NULL);
  idx = 0;
  while (old && old[idx])
    {
      new[idx] = old[idx];
      idx += 1;
    }
  while (idx < size)
    new[idx++] = NULL;
  return (new);
}

static int	find_format(char *link,
			    t_room **rooms,
			    t_link **links,
			    char *this_input)
{
  if (format_rooms(this_input))
    {
      if (*link || stock_room_info(rooms, this_input))
	return (1);
    }
  else if (format_link(this_input))
    {
      *link = 1;
      if (stock_link_info(*rooms, links, this_input))
	return (1);
    }
  else if (my_strncmp("#", this_input, 1))
    return (1);
  return (0);
}

char		**parser(t_room **rooms,
			 t_link **links,
			 int *nbr_ants,
			 t_room **borders)
{
  char		**input;
  char		ret;
  char		link;
  int		line;

  if (!(input = get_ants(&line, nbr_ants, &link)))
    return (NULL);
  while ((input[++line] = get_next_line(0)) && input[line][0])
    {
      if (!((line + 4) % 10) &&
	  !(input = realloc_input(input, ((line + 4) / 10 + 2) * (10 + 10))))
      	return (NULL);
      if (!(input[line] = epurstr(input[line])) ||
      	  (ret = define_start_end(rooms, borders, input, &line)) == -1)
	return (parsing_failure(input, line));
      else if (ret && find_format(&link, rooms, links, input[line]))
	return (parsing_failure(input, line));
    }
  return (input);
}
