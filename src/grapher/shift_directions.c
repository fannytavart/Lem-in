#include "fourmiz.h"

void	shift_directions(t_way *way, t_room *end)
{
  int	i;

  i = 0;
  while (i < (way->size -1))
    {
      way->directions[i] = way->directions[i + 1];
      ++i;
    }
  way->directions[i] = end;
}
