#include <stdlib.h>
#include "fourmiz.h"

int		add_start_end(t_room *rooms, t_room **borders, int cell)
{
  while (rooms && rooms->next)
    rooms = rooms->next;
  if (borders[cell])
    return (1);
  borders[cell] = rooms;
  return (0);
}
