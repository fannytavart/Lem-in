/*
** count_good_virus.c for count_good_virus in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 20 18:38:26 2016 Oscar Stefanini
** Last update Wed Apr 20 18:59:23 2016 Oscar Stefanini
*/

#include "fourmiz.h"

int	count_good_virus(t_virus *virus, int nb_virus)
{
  int	dim;
  int	nbr_solutions;

  dim = 0;
  nbr_solutions = 0;
  while (dim < nb_virus)
    {
      if (virus[dim].solution == 1)
	++nbr_solutions;
      ++dim;
    }
  return (nbr_solutions);
}
