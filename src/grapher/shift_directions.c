/*
** shift_directions.c for shift_directions in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 24 13:36:33 2016 Oscar Stefanini
** Last update Sun Apr 24 13:37:18 2016 Oscar Stefanini
*/

#include "fourmiz.h"

void	shift_directions(t_way *way, t_room *end)
{
  int	i;

  i = 0;
  while (i < (way->size -1))
    {
      way->directions[i] = way->directions[i + 1];
      ++i;
    }
  way->directions[i] = end;
}
