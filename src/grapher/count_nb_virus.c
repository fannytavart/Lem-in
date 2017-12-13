#include <stdlib.h>
#include "fourmiz.h"

int	count_nb_virus(t_room *start)
{
  int	i;
  int	ret;

  i = 0;
  ret = 0;
  while (start->nexts[i] != NULL)
    {

      if (start->nexts[i]->used == 0)
	++ret;
      ++i;
    }
  return (ret);
}
