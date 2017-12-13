#include <stdlib.h>
#include "fourmiz.h"

t_room		**create_array_of_rooms(int nbr_rooms, t_room **rooms)
{
  t_room	*tmp;
  t_room	**tab;
  int		i;

  tmp = *rooms;
  i = 0;
  if ((tab = malloc(sizeof(t_room *) * (nbr_rooms + 1))) == NULL)
    return (NULL);
  tab[nbr_rooms] = NULL;
  while (tmp != NULL)
    {
      if ((tmp->dijkstra = malloc(sizeof(t_dijkstra))) == NULL)
	return (NULL);
      tab[i++] = tmp;
      tmp = tmp->next;
    }
  return (tab);
}
