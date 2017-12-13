#include <limits.h>
#include <stdlib.h>
#include "fourmiz.h"

t_way	*dj_kstralize(t_room **rooms,
		      t_room **borders,
		      t_virus *virus,
		      int nb_virus)
{
  t_way	**fake_ways;
  int	dim;
  t_way	*ret;
  int	size;

  dim = 0;
  ret = NULL;
  size = INT_MAX;
  if ((fake_ways = malloc(sizeof(t_way *) * (nb_virus + 1))) == NULL)
    return (NULL);
  fake_ways[nb_virus] = NULL;
  while (dim < nb_virus)
    {
      initialize_dijkstra(rooms, virus, dim, borders);
      if ((fake_ways[dim] = do_dijkstra(rooms, borders, VIRUS.init)) == NULL)
	return (NULL);
      if (fake_ways[dim]->size <= size)
	{
	  ret = fake_ways[dim];
	  size = fake_ways[dim]->size;
	}
      ++dim;
    }
  return (ret);
}
