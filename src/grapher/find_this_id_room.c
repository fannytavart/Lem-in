/*
** find_this_id_room.c for find_this_id_room in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr 14 11:49:45 2016 Oscar Stefanini
** Last update Thu Apr 14 19:58:29 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

t_room		*find_this_id_room(t_room **rooms, int id)
{
  t_room	*tmp;

  tmp = *rooms;
  while (tmp != NULL)
    {
      if (tmp->id_room == id)
	return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}
