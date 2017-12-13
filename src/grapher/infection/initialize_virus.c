#include <stdlib.h>
#include "fourmiz.h"

char	initialize_virus(t_virus *virus, int nb_virus, t_room *start)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (j < nb_virus)
    {
      if (start->nexts[i]->used == 0)
	{
	  virus[j].solution = 0;
	  virus[j].save = NULL;
	  if (!add_historic_contamination(virus, j, start))
	    return (0);
	  virus[j].nb_save = 1;
	  virus[j].init = start->nexts[i];
	  virus[j++].pos = start->nexts[i];
	  start->nexts[i]->source = 1;
	}
      ++i;
    }
  return (1);
}
