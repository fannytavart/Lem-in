/*
** all_nexts_are_contaminated.c for all_nexts_are_contamined in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 18 18:57:39 2016 Oscar Stefanini
** Last update Sat Apr 23 21:51:04 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

char	all_nexts_are_contaminated(t_virus *virus, int dim)
{
  int	i;

  i = 0;
  while (ROOM->nexts[i] != NULL)
    {
      if (!already_contaminated(virus, dim, ROOM->nexts[i], 1))
	return (0);
      ++i;
    }
  return (1);
}
