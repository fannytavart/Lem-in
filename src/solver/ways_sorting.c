#include <stdlib.h>
#include "fourmiz.h"

static int	ways_not_sorted(t_way **ways)
{
  int		idx;

  idx = 0;
  while (ways[idx + 1] != NULL)
    {
      if (ways[idx]->size > ways[idx + 1]->size)
	return (1);
      ++idx;
    }
  return (0);
}

static void	swap_ways(t_way **way1, t_way **way2)
{
  t_way		*tmp;

  tmp = *way1;
  *way1 = *way2;
  *way2 = tmp;
}

void	sort_ways(t_way **ways)
{
  int	idx;

  while (ways_not_sorted(ways))
    {
      idx = 0;
      while (ways[idx + 1] != NULL)
	{
	  if (ways[idx]->size > ways[idx + 1]->size)
	    swap_ways(&ways[idx], &ways[idx + 1]);
	  idx = idx + 1;
	}
    }
}
