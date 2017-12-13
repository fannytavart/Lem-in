/*
** fill_all_dijkstra.c for fill_all_dijkstra in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr 21 12:02:06 2016 Oscar Stefanini
** Last update Sun Apr 24 23:36:54 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

void	fill_all_dijkstra(t_room **rooms, t_room *pos)
{
  int	i;
  int	id;

  i = 0;
  while (pos->nexts[i] != NULL)
    {
      if (pos->nexts[i]->dijkstra->crossed != 1)
	{
	  id = pos->nexts[i]->id_room;
	  if (rooms[id]->dijkstra->weight == -1 ||
	      (rooms[id]->dijkstra->weight > (pos->dijkstra->weight + 1)))
	    {
	      rooms[id]->dijkstra->weight = pos->dijkstra->weight + 1;
	      rooms[id]->dijkstra->id_from = pos->id_room;
	    }
	}
      ++i;
    }
}
