#include <limits.h>
#include <stdlib.h>
#include "fourmiz.h"

t_room		*next_shortest_room(t_room **rooms, t_room *end)
{
  int		i;
  t_room	*tmp;
  int		weight;

  tmp = NULL;
  i = 0;
  weight = INT_MAX;
  while (rooms != NULL && rooms[i] != NULL)
    {
      if (rooms[i]->dijkstra->crossed == 0 &&
	  rooms[i]->dijkstra->weight > -1 && rooms[i]->used == 0)
	{
	  if (rooms[i] == end)
	    return (rooms[i]);
	  if (weight > rooms[i]->dijkstra->weight)
	    {
	      tmp = rooms[i];
	      weight = rooms[i]->dijkstra->weight;
	    }
	}
      ++i;
    }
  return (tmp);
}
