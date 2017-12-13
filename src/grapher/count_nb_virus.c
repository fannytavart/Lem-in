/*
** count_nb_virus.c for count_nb_virus in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Fri Apr 22 21:50:46 2016 Oscar Stefanini
** Last update Sun Apr 24 23:30:16 2016 Ronan Boiteau
*/

#include <stdlib.h>
#include "fourmiz.h"

int	count_nb_virus(t_room *start)
{
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  while (start->nexts[i] != NULL)
    {

      if (start->nexts[i]->used == 0)
	++ret;
      ++i;
    }
  return (ret);
}
