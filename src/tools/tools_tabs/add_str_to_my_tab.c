/*
** add_str_to_my_tab.c for add_str_to_my_tab in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 14:08:47 2016 Oscar Stefanini
** Last update Mon Apr 11 22:35:46 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools.h"

char	**add_str_to_my_tab(char **old_tab, int n, char *new_str)
{
  char	**new_tab;
  int	i;

  i = 0;
  if ((new_tab = malloc(sizeof(char *) * (n + 1))) == NULL)
    return (NULL);
  new_tab[n] = NULL;
  while (i < (n - 1))
    {
      if ((new_tab[i] = my_strdup(old_tab[i])) == NULL)
	return (NULL);
      free(old_tab[i]);
      ++i;
    }
  if (n > 0)
    free(old_tab);
  if ((new_tab[(n - 1)] = new_str) == NULL)
    return (NULL);
  return (new_tab);
}
