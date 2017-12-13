#include <unistd.h>
#include <stdlib.h>
#include "fourmiz.h"

char	infection(t_room **rooms,
		  t_virus **virus,
		  int nb_virus,
		  t_room **borders)
{
  if ((*virus = malloc(sizeof(t_virus) * (nb_virus))) == NULL  ||
      !initialize_infection(rooms, *virus, borders[0], nb_virus))
    return (0);
  while (!everything_is_infected(*virus, nb_virus))
    {
      if (!contamination(*virus, nb_virus, borders[1], borders[0]))
	return (0);
    }
  return (1);
}
