#include <stdlib.h>
#include "fourmiz.h"

char		already_contaminated(t_virus *virus,
				     int dim,
				     t_room *test,
				     char mod)
{
  t_saved	*tmp;

  tmp = virus[dim].save;
  if (mod == 1 && (test->source == 1 || test->used == 1))
    return (1);
  while (tmp != NULL)
    {
      if (tmp->room_saved == test)
	return (1);
      tmp = tmp->next;
    }
  return (0);
}
