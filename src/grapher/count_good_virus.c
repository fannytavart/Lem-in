#include "fourmiz.h"

int	count_good_virus(t_virus *virus, int nb_virus)
{
  int	dim;
  int	nbr_solutions;

  dim = 0;
  nbr_solutions = 0;
  while (dim < nb_virus)
    {
      if (virus[dim].solution == 1)
	++nbr_solutions;
      ++dim;
    }
  return (nbr_solutions);
}
