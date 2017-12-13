/*
** tab_is_empty.c for tab_is_empty in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 15:39:18 2016 Oscar Stefanini
** Last update Mon Apr 11 15:53:22 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "tools_strings.h"

char	tab_is_empty(char **tab, int size)
{
  int	i;

  i = 0;
  if (size == 0)
    {
      while (tab[i] != NULL)
	{
	  if (str_is_empty(tab[i]) == 0)
	    return (0);
	  ++i;
	}
      return (1);
    }
  while (i < size)
    {
      if (str_is_empty(tab[i]) == 0)
	return (0);
      ++i;
    }
  return (1);
}
