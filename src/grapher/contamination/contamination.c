#include <unistd.h>
#include <stdlib.h>
#include "fourmiz.h"

char	contamination(t_virus *virus, int nb_virus, t_room *end, t_room *start)
{
  int	dim;

  dim = 0;
  while (dim < nb_virus)
    {
      if (virus[dim].pos != start)
	{
	  if ((virus[dim].pos =
	       next_contamination(virus, dim, end, start)) == NULL)
	    return (0);
	}
      ++dim;
    }
  return (1);
}
