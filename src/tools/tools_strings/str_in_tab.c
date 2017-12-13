/*
** str_in_tab.c for str_in_tab in /home/oscar/on_restart_minishell
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sat Apr  2 17:08:19 2016 Oscar Stefanini
** Last update Mon Apr 11 18:06:59 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools_strings.h"

int	str_in_tab(char **tab, int n, char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (-1);
  if (n == 0)
    {
      while (tab[i] != NULL)
	{
	  if (my_strcmp_bool(tab[i], str))
	    return (i);
	  ++i;
	}
      return (-1);
    }
  while (i < n)
    {
      if (my_strcmp_bool(tab[i], str))
	return (i);
      ++i;
    }
  return (-1);
}
