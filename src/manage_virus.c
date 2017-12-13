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
