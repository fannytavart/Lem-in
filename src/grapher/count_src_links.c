#include <stdlib.h>
#include "fourmiz.h"

int		count_src_links(t_link **links, int n)
{
  t_link	*tmp;
  int		i;

  tmp = *links;
  i = 0;
  while (tmp != NULL)
    {
      if (tmp->unique == 1 && tmp->id_room_src == n)
	++i;
      tmp = tmp->next;
    }
  return (i);
}
