/*
** fill_my_tab.c for fill_my_tab in /home/oscar/on_restart_minishell/srcs/tools
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Tue Mar 29 18:28:22 2016 Oscar Stefanini
** Last update Sun Apr 17 16:30:47 2016 Oscar Stefanini
*/

#include "tools_strings.h"

char	**fill_my_tab(char **tab, char c, int t)
{
  int	i;

  i = 0;
  while (i < t)
    {
      tab[i] = fill_my_str(tab[i], c);
      ++i;
    }
  return (tab);
}
