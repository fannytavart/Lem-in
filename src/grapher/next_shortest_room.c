/*
** next_shortest_room.c for next_shortest_room in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr 21 15:02:50 2016 Oscar Stefanini
** Last update Sun Apr 24 18:34:29 2016 Ronan Boiteau
*/

#include <limits.h>
#include <stdlib.h>
#include "fourmiz.h"

t_room		*next_shortest_room(t_room **rooms, t_room *end)
{
  int		i;
  t_room	*tmp;
  int		weight;

  tmp = NULL;
  i = 0;
  weight = INT_MAX;
  while (rooms != NULL && rooms[i] != NULL)
    {
      if (rooms[i]->dijkstra->crossed == 0 &&
	  rooms[i]->dijkstra->weight > -1 && rooms[i]->used == 0)
	{
	  if (rooms[i] == end)
	    return (rooms[i]);
	  if (weight > rooms[i]->dijkstra->weight)
	    {
	      tmp = rooms[i];
	      weight = rooms[i]->dijkstra->weight;
	    }
	}
      ++i;
    }
  return (tmp);
}
