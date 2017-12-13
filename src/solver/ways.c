#include <stdlib.h>
#include "fourmiz.h"

int	get_last_index(t_way **ways)
{
  int		idx;

  idx = 0;
  while (ways[idx] != NULL)
    idx = idx + 1;
  return (idx - 1);
}

static int	way_unoccupied(t_way *way, int *idx)
{
  if (way->directions[0]->occupied == 0)
    {
      *idx -= 1;
      return (1);
    }
  return (0);
}

static int	should_use_curr_way(t_way **ways, int nbr_ants, int *idx)
{
  if (nbr_ants - (ways[*idx - 1]->size - 1) >= (ways[*idx]->size - 1))
    return (1);
  return (0);
}

/*
** Visite les chemins du plus grand au plus petit.
** Si un grand chemin est intéressant à visiter, le visite.
** Sinon, ne fait rien pour voir si un chemin plus petit serait préférable
*/
t_way		*get_next_way(t_way **ways, int nbr_ants, int *idx)
{
  while (*idx >= 0)
    {
      if (*idx > 0)
	{
	  if (should_use_curr_way(ways, nbr_ants, idx))
	    {
	      if (way_unoccupied(ways[*idx - 1], idx))
		return (ways[*idx + 1]);
	    }
	  else
	    {
	      if (way_unoccupied(ways[*idx - 1], idx))
		return (ways[*idx]);
	    }
	}
      else if (*idx == 0)
	{
	  if (way_unoccupied(ways[*idx], idx))
	    return (ways[*idx + 1]);
	  return (NULL);
	}
      *idx -= 1;
    }
  return (NULL);
}
