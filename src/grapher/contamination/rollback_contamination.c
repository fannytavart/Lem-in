/*
** rollback_contamination.c for rollback_contamination in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 17 12:30:38 2016 Oscar Stefanini
** Last update Sun Apr 24 23:31:58 2016 Ronan Boiteau
*/

#include <stdlib.h>
#include "fourmiz.h"

t_room		*rollback_contamination(t_virus *virus, int dim)
{
  t_saved	*tmp;
  t_room	*ret;

  tmp = virus[dim].save;
  if (tmp->next == NULL)
    {
      virus[dim].solution = -1;
      ret = tmp->room_saved;
      free(tmp);
      virus[dim].save = NULL;
      return (ret);
    }
  while (tmp->next->next != NULL)
    tmp = tmp->next;
  ret = tmp->next->room_saved;
  virus[dim].last_save = tmp;
  free(tmp->next);
  tmp->next = NULL;
  return (ret);
}
