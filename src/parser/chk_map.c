/*
** print_map.c for lemin in /home/boitea_r
** 
** Made by Ronan Boiteau
** Login   <boitea_r@epitech.net>
** 
** Started on  Thu Apr 21 12:50:17 2016 Ronan Boiteau
** Last update Sun Apr 24 21:56:26 2016 Ronan Boiteau
*/

#include <unistd.h>
#include "tools_ints.h"
#include "tools_strings.h"
#include "fourmiz.h"

static int	chk_rooms_links(t_room *rooms, t_link *links)
{
  return (!links || !rooms ? 1 : 0);
}

static int	chk_borders(t_room **borders)
{
  return (!borders[0] || !borders[1] ? 1 : 0);
}

int		chk_map(t_room *rooms,
			t_link *links,
			int nbr_ants,
			t_room **borders)
{
  return ((nbr_ants <= 0 || chk_rooms_links(rooms, links) ||
	   chk_borders(borders) ? 1 : 0));
}
