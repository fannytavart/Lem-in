#include <stdlib.h>
#include "fourmiz.h"

t_room	*next_contamination(t_virus *virus,
			    int dim,
			    t_room *end,
			    t_room *start)
{
  if (ROOM == end)
    {
      virus[dim].solution = 1;
      return (start);
    }
  while ((ROOM->nexts[ROOM->i[dim]] != NULL) &&
	 already_contaminated(virus, dim, ROOM->nexts[ROOM->i[dim]], 1))
    ++ROOM->i[dim];
  if (ROOM->nexts[ROOM->i[dim]] == NULL)
    return (rollback_contamination(virus, dim));
  if (!add_historic_contamination(virus, dim, ROOM))
    return (NULL);
  virus[dim].nb_save += 1;
  return (ROOM->nexts[(ROOM->i[dim])++]);
}
