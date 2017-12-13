/*
** epur_virus.c for epur_virus in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 20 18:35:11 2016 Oscar Stefanini
** Last update Sun Apr 24 21:35:47 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

t_virus		*epur_virus(t_virus *virus, int *nb_virus, char *status)
{
  int		dim;
  int		i;
  int		old_nb_virus;
  t_virus	*ret;

  *status = 0;
  old_nb_virus = *nb_virus;
  if ((*nb_virus = count_good_virus(virus, *nb_virus)) == 0)
    return (virus);
  if ((ret = malloc(sizeof(t_virus) * (*nb_virus))) == NULL)
    {
      *status = -1;
      return (NULL);
    }
  dim = 0;
  i = 0;
  while (dim < old_nb_virus)
    {
      if (VIRUS.solution == 1)
	cpy_virus(ret, i++, virus, dim);
      ++dim;
    }
  return (ret);
}
