/*
** everything_is_infected.c for everything_is_infected in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sat Apr 16 21:34:36 2016 Oscar Stefanini
** Last update Fri Apr 22 17:53:09 2016 Oscar Stefanini
*/

#include "fourmiz.h"

char	everything_is_infected(t_virus *virus, int nb_virus)
{
  int	i;

  i = 0;
  while (i < nb_virus)
    {
      if (virus[i].solution == 0)
	return (0);
      ++i;
    }
  return (1);
}
