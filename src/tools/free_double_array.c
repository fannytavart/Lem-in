/*
** free_double_array.c for free_double_array in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:45:51 2016 Oscar Stefanini
** Last update Tue Mar 29 18:46:11 2016 Oscar Stefanini
*/

#include <stdlib.h>

void	free_double_array_ch(char **tab, char master, int lim_p, int lim)
{
  int	i;

  i = 0;
  if (lim_p == 1)
    {
      while (i < lim)
	{
	  free(tab[i]);
	  ++i;
	}
      if (master == 1)
	free(tab);
      return ;
    }
  while (tab[i] != NULL)
    {
      free(tab[i]);
      ++i;
    }
  if (master == 1)
    free(tab);
}
