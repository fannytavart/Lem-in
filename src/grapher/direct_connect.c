/*
** direct_connect.c for direct_connect in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 24 14:44:16 2016 Oscar Stefanini
** Last update Sun Apr 24 15:18:01 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

t_way	*direct_way(t_room **save)
{
  t_way	*ret;

  if ((ret = malloc(sizeof(t_way))) == NULL)
    return (NULL);
  ret->size = 1;
  if ((ret->directions = malloc(sizeof(t_room *) * 3)) == NULL)
    return (NULL);
  ret->directions[0] = save[0];
  ret->directions[1] = save[1];
  ret->directions[2] = NULL;
  return (ret);
}

t_way	**direct_connect(t_room **borders, char *finish)
{
  t_way	**ret;
  int	i;

  *finish = 0;
  i = 0;
  while (borders[0]->nexts[i] != NULL)
    {
      if (borders[0]->nexts[i] == borders[1])
	{
	  if ((ret = malloc(sizeof(t_way *) * 2)) == NULL ||
	      ((ret[0] = direct_way(borders)) == NULL))
	    {
	      *finish = -1;
	      return (NULL);
	    }
	  *finish = 1;
	  ret[1] = NULL;
	  return (ret);
	}
      ++i;
    }
  return (NULL);
}
