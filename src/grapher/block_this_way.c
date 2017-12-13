/*
** block_this_way.c for block_this_way in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Fri Apr 22 17:01:28 2016 Oscar Stefanini
** Last update Sun Apr 24 22:20:45 2016 Fanny Tavart
*/

#include <stdlib.h>
#include "fourmiz.h"

void	block_this_way(t_room **rooms, t_room **save)
{
  int	i;

  i = 0;
  while (rooms[i] != NULL)
    {
      if (rooms[i] != save[0] && rooms[i] != save[1])
	rooms[i]->used = 1;
      ++i;
    }
}
