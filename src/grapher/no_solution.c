#include <stdlib.h>
#include "fourmiz.h"

char	no_solution(t_virus *virus, int nb_virus)
{
  int	dim;

  dim = 0;
  while (dim < nb_virus)
    {
      if (VIRUS.solution == 1)
	return (0);
      ++dim;
    }
  return (1);
}
