/*
** initialize_infection.c for initialize_infection in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sat Apr 16 18:21:28 2016 Oscar Stefanini
** Last update Sun Apr 24 23:32:32 2016 Ronan Boiteau
*/

#include <stdlib.h>
#include "fourmiz.h"

char	initialize_infection(t_room **rooms,
			     t_virus *tab_virus,
			     t_room *start,
			     int nb_virus)
{
  if (!initialize_infection_of_rooms(rooms, nb_virus))
    return (0);
  initialize_virus(tab_virus, nb_virus, start);
  return (1);
}
