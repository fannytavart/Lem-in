/*
** no_solution.c for no_solution in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 20 16:46:22 2016 Oscar Stefanini
** Last update Wed Apr 20 16:52:18 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

char	no_solution(t_virus *virus, int nb_virus)
{
  int	dim;

  dim = 0;
  while (dim < nb_virus)
    {
      if (VIRUS.solution == 1)
	return (0);
      ++dim;
    }
  return (1);
}
