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
