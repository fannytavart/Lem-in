/*
** count_start_links.c for count_start_links in /home/oscar/CPE_2015_Lemin/srcs/grapher
**
** Made by Oscar Stefanini
** Login   <stefan_o@epitech.net>
**
** Started on  Wed Apr 13 22:00:10 2016 Oscar Stefanini
** Last update Mon Apr 25 14:41:08 2016 Oscar Stefanini
*/

#include <stdlib.h>
#include "fourmiz.h"

int		count_src_links(t_link **links, int n)
{
  t_link	*tmp;
  int		i;

  tmp = *links;
  i = 0;
  while (tmp != NULL)
    {
      if (tmp->unique == 1 && tmp->id_room_src == n)
	++i;
      tmp = tmp->next;
    }
  return (i);
}
