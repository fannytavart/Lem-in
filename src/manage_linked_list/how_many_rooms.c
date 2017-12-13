/*
** how_many_rooms.c for how_many_rooms in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 13 16:56:06 2016 Oscar Stefanini
** Last update Thu Apr 14 19:56:10 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

int		how_many_rooms(t_room **rooms)
{
  int		i;
  t_room	*tmp;

  tmp = *rooms;
  i = 0;
  while (tmp != NULL)
    {
      i += 1;
      tmp = tmp->next;
    }
  return (i);
}
