/*
** main.c for lemin in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Sun Apr 24 16:32:17 2016 Ronan Boiteau
** Last update Sun Apr 24 23:30:04 2016 Ronan Boiteau
*/

#include <stdlib.h>
#include "fourmiz.h"
#include "parser.h"

static void	init_lists(t_room **borders,
			   t_room ***rooms,
			   t_link **links,
			   t_room **list)
{
  borders[0] = NULL;
  borders[1] = NULL;
  *list = NULL;
  *links = NULL;
  *rooms = NULL;
  return ;
}

int		main(void)
{
  t_link	*links;
  int		nbr_ant;
  int		nbr_rooms;
  t_room	*list;
  t_room	**rooms;
  t_room	**borders;
  char		**input;

  nbr_ant = 0;
  if (!(borders = malloc(sizeof(t_room) * 2)))
    return (1);
  init_lists(borders, &rooms, &links, &list);
  if (!(input = parser(&list, &links, &nbr_ant, borders)))
    return (1);
  print_map(input);
  if (chk_map(list, links, nbr_ant, borders))
    return (1);
  nbr_rooms = how_many_rooms(&list);
  if (!graph_creator(&links, &list))
    return (1);
  if ((rooms = create_array_of_rooms(nbr_rooms, &list)) == NULL)
    return (1);
  if (!algo(rooms, nbr_ant, borders))
    return (1);
  return (0);
}
