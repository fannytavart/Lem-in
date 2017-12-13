/*
** add_new_direction.c for add_new_direction in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Thu Apr 21 13:21:25 2016 Oscar Stefanini
** Last update Fri Apr 22 13:15:02 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

t_room		**add_direction(t_room **old_directions, int i, t_room *new_dir)
{
  t_room	**new_tab;
  int		k;

  k = 0;
  if ((new_tab = malloc(sizeof(t_room *) * (i + 2))) == NULL)
    return (NULL);
  new_tab[i + 1] = NULL;
  while (k < i)
    {
      new_tab[k] = old_directions[k];
      ++k;
    }
  new_tab[k] = new_dir;
  return (new_tab);
}
