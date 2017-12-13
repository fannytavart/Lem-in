/*
** find_pos_room.c for find_pos_room in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 13 16:13:50 2016 Oscar Stefanini
** Last update Thu Apr 14 19:40:28 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools_strings.h"
#include "fourmiz.h"

int		find_pos_room(char *name_room, t_room **rooms)
{
  t_room	*tmp;
  int		i;

  tmp = *rooms;
  i = 0;
  while (tmp != NULL && !my_strcmp_bool(name_room, tmp->name))
    {
      tmp = tmp->next;
      ++i;
    }
  return (i);
}
