/*
** initialize_infection_of_rooms.c for initialize_infection_of_rooms in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sat Apr 16 18:30:25 2016 Oscar Stefanini
** Last update Sat Apr 23 14:05:38 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"
#include "tools_ints.h"

char	initialize_infection_of_rooms(t_room **rooms, int nb_virus)
{
  int	k;

  k = 0;
  while (rooms[k] != NULL)
    {
      if ((rooms[k]->i = malloc(sizeof(int) * (nb_virus))) == NULL)
	return (0);
      fill_every_int(rooms[k]->i, 0, nb_virus);
      ++k;
    }
  return (1);
}
