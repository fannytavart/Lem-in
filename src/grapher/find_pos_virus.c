#include "fourmiz.h"

void		find_pos_virus(t_room **start, t_room **end)
{
  t_room	*tmp;

  if (start[0]->nb_links > end[0]->nb_links)
    {
      tmp = end[0];
      end[0] = start[0];
      start[0] = tmp;
    }
  start[0]->source = 1;
}
