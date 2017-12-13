/*
** tab_full_of_null.c for tab_full_of_null in /home/oscar/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Mon Apr 11 16:09:11 2016 Oscar Stefanini
** Last update Mon Apr 11 16:11:47 2016 Oscar Stefanini
*/

#include <stdlib.h>

char	tab_full_of_null(char **tab, int n)
{
  int	i;

  if (n == 0)
    {
      if (tab[0] == NULL)
	return (1);
      return (0);
    }
  i = 0;
  while (i < n)
    {
      if (tab[i] != NULL)
	return (0);
      ++i;
    }
  return (1);
}
