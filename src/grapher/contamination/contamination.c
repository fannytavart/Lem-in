/*
** mutate_every_virus.c for mutate_every_virus in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 17 00:10:51 2016 Oscar Stefanini
** Last update Sun Apr 24 23:32:37 2016 Ronan Boiteau
*/

#include <unistd.h>
#include <stdlib.h>
#include "fourmiz.h"

char	contamination(t_virus *virus, int nb_virus, t_room *end, t_room *start)
{
  int	dim;

  dim = 0;
  while (dim < nb_virus)
    {
      if (virus[dim].pos != start)
	{
	  if ((virus[dim].pos =
	       next_contamination(virus, dim, end, start)) == NULL)
	    return (0);
	}
      ++dim;
    }
  return (1);
}
