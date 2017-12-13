/*
** count_dest_links.c for count_dest_links in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 13 23:06:12 2016 Oscar Stefanini
** Last update Mon Apr 25 14:40:49 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

int		count_dest_links(t_link **links, int n)
{
  t_link	*tmp;
  int		i;

  tmp = *links;
  i = 0;
  while (tmp != NULL)
    {
      if (tmp->unique == 1 && tmp->id_room_dest == n)
	++i;
      tmp = tmp->next;
    }
  return (i);
}
