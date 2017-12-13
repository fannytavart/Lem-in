/*
** free_tab_strings.c for free_tab_strings in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 15:04:33 2016 Oscar Stefanini
** Last update Mon Apr 11 15:12:00 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools_tabs.h"

void	free_tab_strings(char **tab, int n, char master)
{
  int	i;

  i = 0;
  while (!bool_tab((void **)tab, n, i))
    {
      free(tab[i]);
      ++i;
    }
  if (master == 1)
    free(tab);
}
