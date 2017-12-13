/*
** create_array_of_rooms.c for create_array_of_rooms in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr 14 20:18:56 2016 Oscar Stefanini
** Last update Wed Apr 20 22:16:39 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

t_room		**create_array_of_rooms(int nbr_rooms, t_room **rooms)
{
  t_room	*tmp;
  t_room	**tab;
  int		i;

  tmp = *rooms;
  i = 0;
  if ((tab = malloc(sizeof(t_room *) * (nbr_rooms + 1))) == NULL)
    return (NULL);
  tab[nbr_rooms] = NULL;
  while (tmp != NULL)
    {
      if ((tmp->dijkstra = malloc(sizeof(t_dijkstra))) == NULL)
	return (NULL);
      tab[i++] = tmp;
      tmp = tmp->next;
    }
  return (tab);
}
