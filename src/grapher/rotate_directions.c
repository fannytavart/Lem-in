#include "fourmiz.h"

void		rotate_directions(t_way *way)
{
  t_room	*tmp_save;
  int		i;
  int		j;

  i = 0;
  j = way->size - 1;
  while (i < (way->size / 2))
    {
      tmp_save = way->directions[i];
      way->directions[i] = way->directions[j];
      way->directions[j] = tmp_save;
      ++i;
      --j;
    }
}
