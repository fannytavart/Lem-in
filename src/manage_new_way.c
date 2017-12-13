/*
** manage_new_way.c for manage_new_way in /home/oscar/pls/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 24 22:45:26 2016 Oscar Stefanini
** Last update Sun Apr 24 22:21:20 2016 Fanny Tavart
*/

#include <stdlib.h>
#include "fourmiz.h"

t_way	**manage_new_way(t_room **borders,
			 t_room **save,
			 t_way *new_way,
			 t_way **ways)
{
  t_way	**ret;

  if (borders[0] == save[0])
    rotate_directions(new_way);
  else
    shift_directions(new_way, save[1]);
  block_this_way(new_way->directions, save);
  if ((ret = add_new_way(ways, new_way)) == NULL)
    return (NULL);
  return (ret);
}
