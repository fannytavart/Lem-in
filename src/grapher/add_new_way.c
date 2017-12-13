/*
** add_new_way.c for add_new_way in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr 21 15:10:42 2016 Oscar Stefanini
** Last update Sat Apr 23 16:15:30 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

t_way	**add_new_way(t_way **old_ways, t_way *new_way)
{
  t_way	**new_ways;
  int	size;
  int	i;

  i = 0;
  size = 0;
  if (old_ways != NULL)
    {
      while (old_ways[size] != NULL)
	++size;
    }
  if ((new_ways = malloc(sizeof(t_way *) * (size + 2))) == NULL)
    return (NULL);
  new_ways[size + 1] = NULL;
  while (i < size)
    {
      new_ways[i] = old_ways[i];
      ++i;
    }
  new_ways[i] = new_way;
  return (new_ways);
}
