/*
** bool_tab.c for bool_tab in /home/oscar/on_restart_minishell/srcs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Fri Apr  1 15:47:46 2016 Oscar Stefanini
** Last update Wed Apr  6 22:15:59 2016 Oscar Stefanini
*/

#include <stdlib.h>

char	bool_tab(void **tab, int n, int tst)
{
  if (n == 0)
    {
      if (tab[tst] == NULL)
	return (1);
      return (0);
    }
  if (n == tst)
    return (1);
  return (0);
}
