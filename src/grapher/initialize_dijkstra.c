/*
** initialize_dijkstra.c for initialize_dijkstra in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 20 22:22:18 2016 Oscar Stefanini
** Last update Fri Apr 22 16:20:25 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

void	initialize_dijkstra(t_room **rooms,
			    t_virus *virus,
			    int dim,
			    t_room **borders)
{
  int	i;

  i = 0;
  while (rooms[i] != NULL)
    {
      rooms[i]->dijkstra->crossed = 0;
      rooms[i]->dijkstra->weight = -1;
      rooms[i]->dijkstra->id_from = -1;
      if (rooms[i] == borders[0])
	rooms[i]->dijkstra->crossed = 1;
      else
	{
	  if (rooms[i] == virus[dim].init)
	    {
	      rooms[i]->dijkstra->weight = 0;
	      rooms[i]->dijkstra->crossed = 1;
	    }
	}
      ++i;
    }
}
