#include <stdlib.h>
#include "fourmiz.h"

t_room		*find_this_id_room(t_room **rooms, int id)
{
  t_room	*tmp;

  tmp = *rooms;
  while (tmp != NULL)
    {
      if (tmp->id_room == id)
	return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}
