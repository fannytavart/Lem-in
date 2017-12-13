/*
** add_start_end.c for Lemin in /home/tavart_f/rendu/CPE2/CPE_2015_Lemin/parser
** 
** Made by Fanny Tavart
** Login   <tavart_f@epitech.net>
** 
** Started on  Tue Apr 19 13:21:12 2016 Fanny Tavart
** Last update Sun Apr 24 21:55:39 2016 Ronan Boiteau
*/

#include <stdlib.h>
#include "fourmiz.h"

int		add_start_end(t_room *rooms, t_room **borders, int cell)
{
  while (rooms && rooms->next)
    rooms = rooms->next;
  if (borders[cell])
    return (1);
  borders[cell] = rooms;
  return (0);
}
