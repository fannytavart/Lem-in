/*
** already_contaminated.c for already_contaminated in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 17 17:06:06 2016 Oscar Stefanini
** Last update Sun Apr 24 22:19:19 2016 Fanny Tavart
*/

#include <stdlib.h>
#include "fourmiz.h"

char		already_contaminated(t_virus *virus,
				     int dim,
				     t_room *test,
				     char mod)
{
  t_saved	*tmp;

  tmp = virus[dim].save;
  if (mod == 1 && (test->source == 1 || test->used == 1))
    return (1);
  while (tmp != NULL)
    {
      if (tmp->room_saved == test)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}
