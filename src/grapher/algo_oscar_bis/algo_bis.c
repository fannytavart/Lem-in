#include <unistd.h>
#include <stdlib.h>
#include "fourmiz.h"
#include "solve.h"

void		save_real_order(t_room **borders, t_room **save)
{
  save[0] = borders[0];
  save[1] = borders[1];
  return ;
}

char		algo(t_room **rooms, int nbr_ant, t_room **borders)
{
  t_virus	*virus;
  int		nb_virus;
  char		status[2];
  t_way		*new_way;
  t_way		**ways;
  t_room	*save[2];

  save_real_order(borders, save);
  if ((ways = direct_connect(save, &status[0])) == NULL && status[0] == -1)
    return (0);
  else if (ways != NULL && status[0]  == 1)
    return (release_ants(ways, nbr_ant, save, 1));
  while (status[0] == 0)
    {
      find_pos_virus(&borders[0], &borders[1]);
      if ((status[1] = manage_virus(borders, rooms, &virus, &nb_virus)) == -1)
	return (0);
      else if (status[1] == 0)
	return (release_ants(ways, nbr_ant, save, 0));
      if ((new_way = dj_kstralize(rooms, borders, virus, nb_virus)) == NULL)
	return (0);
      if ((ways = manage_new_way(borders, save, new_way, ways)) == NULL)
	return (0);
    }
  return (1);
}
