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
