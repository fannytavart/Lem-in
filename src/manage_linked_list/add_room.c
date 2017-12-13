/*
** put_in_queue_rooms.c for put_in_queue_rooms in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 13 13:59:10 2016 Oscar Stefanini
** Last update Sun Apr 24 16:25:42 2016 Ronan Boiteau
*/

#include <stdlib.h>
#include "tools.h"
#include "fourmiz.h"

char		add_room(t_room **rooms, char *name, t_uint x, t_uint y)
{
  t_room	*new_elem;
  t_room	*tmp;

  tmp = *rooms;
  if ((new_elem = malloc(sizeof(t_room) * 1)) == NULL)
    return (0);
  new_elem->name = name;
  new_elem->x = x;
  new_elem->y = y;
  new_elem->id_room = 1;
  new_elem->used = 0;
  new_elem->next = NULL;
  if (*rooms == NULL)
    {
      new_elem->id_room = 0;
      *rooms = new_elem;
      return (1);
    }
  while (tmp->next != NULL)
    {
      new_elem->id_room += 1;
      tmp = tmp->next;
    }
  tmp->next = new_elem;
  return (1);
}
