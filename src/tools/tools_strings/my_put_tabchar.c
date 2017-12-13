/*
** my_put_tabchar.c for my_put_tabchar in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:49:19 2016 Oscar Stefanini
** Last update Fri Apr  8 22:25:21 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include <unistd.h>
#include "tools.h"

void	my_put_tabint(int *tab, int limit)
{
  int	i;

  i = 0;
  while (i < limit)
    {
      my_putnbr(tab[i]);
      write(1, "\n", 1);
      ++i;
    }
}

void	my_put_tabuint(unsigned int *tab, int limit)
{
  int	i;

  i = 0;
  while (i < limit)
    {
      my_putnbr_u(tab[i]);
      write(1, "\n", 1);
      ++i;
    }
}
