#include <stdlib.h>
#include "fourmiz.h"

int		how_many_rooms(t_room **rooms)
{
  int		i;
  t_room	*tmp;

  tmp = *rooms;
  i = 0;
  while (tmp != NULL)
    {
      i += 1;
      tmp = tmp->next;
    }
  return (i);
}
