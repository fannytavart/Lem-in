/*
** add_save.c for add_save in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Fri Apr 15 22:33:27 2016 Oscar Stefanini
** Last update Sun Apr 24 21:52:29 2016 Fanny Tavart
*/

#include <stdlib.h>
#include "fourmiz.h"

void		add_save(t_saved **save, t_room *data)
{
  t_saved	*tmp;
  t_saved	*new_elem;

  if ((new_elem = malloc(sizeof(t_saved))) == NULL)
    return ;
  new_elem->room_saved = data;
  new_elem->prev = NULL;
  new_elem->next = NULL;
  if (*save == NULL)
    {
      *save = new_elem;
      return ;
    }
  tmp = *save;
  while (tmp->next != NULL)
    tmp = tmp->next;
  tmp->next = new_elem;
  new_elem->prev = tmp;
}
