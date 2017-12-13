#include <stdlib.h>
#include "fourmiz.h"

t_way	*initialize_way_ret()
{
  t_way	*ret;

  if ((ret = malloc(sizeof(t_way))) == NULL)
    return (NULL);
  ret->first_empty = 1;
  return (ret);
}

t_way		*do_dijkstra(t_room **rooms, t_room **borders, t_room *init)
{
  t_way		*ret;
  t_room	**directions;
  int		i;

  if ((ret = initialize_way_ret()) == NULL)
    return (NULL);
  while (init != borders[1])
    {
      fill_all_dijkstra(rooms, init);
      init->dijkstra->crossed = 1;
      init = next_shortest_room(rooms, borders[1]);
    }
  if (!(directions = malloc(sizeof(t_room *) * (init->dijkstra->weight + 2))))
    return (NULL);
  directions[init->dijkstra->weight + 1] = NULL;
  i = 0;
  ret->size = init->dijkstra->weight + 1;
  while (i < ret->size)
    {
      directions[i++] = init;
      init = find_this_id_room(rooms, init->dijkstra->id_from);
    }
  ret->directions = directions;
  return (ret);
}
