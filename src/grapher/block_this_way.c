#include <stdlib.h>
#include "fourmiz.h"

void	block_this_way(t_room **rooms, t_room **save)
{
  int	i;

  i = 0;
  while (rooms[i] != NULL)
    {
      if (rooms[i] != save[0] && rooms[i] != save[1])
	rooms[i]->used = 1;
      ++i;
    }
}
