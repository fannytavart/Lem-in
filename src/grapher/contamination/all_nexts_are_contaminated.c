#include <stdlib.h>
#include "fourmiz.h"

char	all_nexts_are_contaminated(t_virus *virus, int dim)
{
  int	i;

  i = 0;
  while (ROOM->nexts[i] != NULL)
    {
      if (!already_contaminated(virus, dim, ROOM->nexts[i], 1))
	return (0);
      ++i;
    }
  return (1);
}
