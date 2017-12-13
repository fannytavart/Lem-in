/*
** find_pos_virus.c for find_pos_virus in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 20 15:22:25 2016 Oscar Stefanini
** Last update Sun Apr 24 22:20:35 2016 Fanny Tavart
*/

#include "fourmiz.h"

void		find_pos_virus(t_room **start, t_room **end)
{
  t_room	*tmp;

  if (start[0]->nb_links > end[0]->nb_links)
    {
      tmp = end[0];
      end[0] = start[0];
      start[0] = tmp;
    }
  start[0]->source = 1;
}
