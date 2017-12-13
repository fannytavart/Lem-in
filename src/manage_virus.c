/*
** manage_virus.c for manage_virus in /home/oscar/pls/CPE_2015_Lemin
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Sun Apr 24 22:07:36 2016 Oscar Stefanini
** Last update Sun Apr 24 22:36:16 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

char	manage_virus(t_room **borders,
		     t_room **rooms,
		     t_virus **virus,
		     int *nb_virus)
{
  char	status;

  if ((*nb_virus = count_nb_virus(borders[0])) == 0)
    return (0);
  if (!infection(rooms, virus, *nb_virus, borders))
    return (-1);
  if ((*virus = epur_virus(*virus, nb_virus, &status)) == NULL &&
      status == -1)
    return (-1);
  if (!count_good_virus(*virus, *nb_virus))
    return (0);
  return (1);
}
