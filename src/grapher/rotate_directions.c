/*
** rotate_directions.c for rotate_directions in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Fri Apr 22 15:06:02 2016 Oscar Stefanini
** Last update Sun Apr 24 23:31:04 2016 Ronan Boiteau
*/

#include "fourmiz.h"

void		rotate_directions(t_way *way)
{
  t_room	*tmp_save;
  int		i;
  int		j;

  i = 0;
  j = way->size - 1;
  while (i < (way->size / 2))
    {
      tmp_save = way->directions[i];
      way->directions[i] = way->directions[j];
      way->directions[j] = tmp_save;
      ++i;
      --j;
    }
}
