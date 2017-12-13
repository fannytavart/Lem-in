/*
** count_strings_in_tab_seps.c for count_strings_in_tab_seps in /home/oscar/on_restart_minishell/srcs/tools/tools_tabs
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Mar 31 19:55:18 2016 Oscar Stefanini
** Last update Mon Apr 11 16:42:30 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools.h"
#include "tools_tabs.h"

int	count_strings_in_tab_seps(char **tab, int n, char **seps, int j)
{
  int	i[2];

  i[0] = 0;
  i[1] = 0;
  while (!bool_tab((void **)tab, n, i[0]))
    {
      if (str_in_tab(seps, j, tab[i[0]]) == -1)
	{
	  i[1] += 1;
	  while (!bool_tab((void **)tab, n, i[0]) &&
		 str_in_tab(seps, j, tab[i[0]]) == -1)
	    i[0] += 1;
	}
      if (!bool_tab((void **)tab, n, i[0]) &&
	  (str_in_tab(seps, j, tab[i[0]]) != -1))
	i[1] += 1;
      if (!bool_tab((void **)tab, n, i[0]))
	i[0] += 1;
    }
  return (i[1]);
}
