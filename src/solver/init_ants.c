/*
** init_ants.c for  in /home/badia_r/git_pls/yolo
**
** Made by Raphael Badia
** Login   <badia_r@epitech.net>
**
** Started on  Sun Apr 24 14:42:28 2016 Raphael Badia
** Last update Sun Apr 24 18:28:46 2016 Fanny Tavart
*/

#include <stdlib.h>
#include "fourmiz.h"

t_ant	**init_ants(int nb_ants, t_room *start, t_way *way)
{
  int	id;
  int	idx;
  t_ant	**array;

  idx = 0;
  id = 1;
  if (nb_ants == 0)
    return (NULL);
  if ((array = malloc(sizeof(t_ant *) * (nb_ants + 1))) == NULL)
    return (NULL);
  while (idx < nb_ants)
    {
      if ((array[idx] = malloc(sizeof(t_ant))) == NULL)
	return (NULL);
      array[idx]->id = id;
      array[idx]->room = start;
      array[idx]->way = way;
      id += 1;
      ++idx;
    }
  array[idx] = NULL;
  return (array);
}

int	anthill_done(t_ant **ants)
{
  int	idx;

  idx = 0;
  while (ants[idx] != NULL)
    {
      if (ants[idx]->room != NULL)
	return (0);
      ++idx;
    }
  return (1);
}
