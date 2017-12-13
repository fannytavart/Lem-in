#include <stdlib.h>
#include "fourmiz.h"

void	fill_all_dijkstra(t_room **rooms, t_room *pos)
{
  int	i;
  int	id;

  i = 0;
  while (pos->nexts[i] != NULL)
    {
      if (pos->nexts[i]->dijkstra->crossed != 1)
	{
	  id = pos->nexts[i]->id_room;
	  if (rooms[id]->dijkstra->weight == -1 ||
	      (rooms[id]->dijkstra->weight > (pos->dijkstra->weight + 1)))
	    {
	      rooms[id]->dijkstra->weight = pos->dijkstra->weight + 1;
	      rooms[id]->dijkstra->id_from = pos->id_room;
	    }
	}
      ++i;
    }
}
